#!/usr/bin/env python3

import os
import subprocess
import sys
sys.stdout.reconfigure(line_buffering=True)
syst = os.system

CONTAINER_NAME = "mpros2" # give this container a name

def build_run():
    syst("xhost +local:") # allows docker to connect to display (using X11) for generating visualization windows
    print(r"""
          Please copy/paste the following lines after entering the container: 
          source /opt/ros/jazzy/setup.bash  # source ROS2
          sudo chown -R ros:ros /mpros2/install /mpros2/build /mpros2/log
          colcon build --merge-install && source install/setup.bash
          source /mpros2/install/setup.bash  # source workspace
          export PS1="\[\e[38;2;13;183;237m\][CONTAINER \u@\h \w] \[\e[0m\]"  # recolor the container prompt
          """)

    docker_run_output = subprocess.run('docker ps -a --format "{{.Names}}"',
                                shell=True, 
                                capture_output=True,
                                check=True,
                                text=True)
    if docker_run_output:
        container_names = docker_run_output.stdout.splitlines()
        # print(f"container_names: {container_names}")
        if container_names and CONTAINER_NAME in container_names:
            print(f"'{CONTAINER_NAME}' container already exists. Starting now...")
            syst(f"sudo docker start {CONTAINER_NAME}") # restart the existing container
            syst(f"sudo docker exec -it -e DISPLAY=$DISPLAY {CONTAINER_NAME} bash") # open a persisting interactive bash in the container. Could potentially replace with -ai
        else: 
            print(f"{CONTAINER_NAME} container does not exist yet. Building and running now...")
            device_flags = get_device_flags()
            syst(f"sudo docker build -t {CONTAINER_NAME}:jazzy .") # build (then soon run)
            syst(f"""sudo docker run -it \
                --name {CONTAINER_NAME} \
                {device_flags} \
                --device=/dev/bus/usb \
                -v $(pwd)/src:/{CONTAINER_NAME}/src \
                -v /tmp/.X11-unix:/tmp/.X11-unix \
                -e DISPLAY=$DISPLAY \
                --device=/dev/dri:/dev/dri \
                -e QT_X11_NO_MITSHM=1 \
                -e LIBGL_ALWAYS_SOFTWARE=1 \
                {CONTAINER_NAME}:jazzy \
                bash
                """)
            
def get_device_flags():
    devices = []
    lines = subprocess.check_output("v4l2-ctl --list-devices", shell=True, text=True).splitlines()
    for i, line in enumerate(lines):
        if "RealSense" in line:
            for subline in lines[i+1:-1]:
                subline = subline.strip()
                if not subline: break
                if "/dev/video" in subline: devices.append(subline)
        # print(f"{i}: {repr(line)}")
    device_flags = " ".join([f"--device={d}" for d in devices])
    # print(f"lines: {lines}")
    print(f"Detected RealSense devices: {devices}")
    return device_flags
            
if __name__ == "__main__":
    build_run()