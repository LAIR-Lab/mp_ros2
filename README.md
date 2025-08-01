# media_pipe_ros2
<!-- ABOUT THE PROJECT -->
## About The Project
ROS2 package that utilizes the MediaPipe library.
https://mediapipe.dev/

Functionalities:
- [ ] Face Detection
- [x] Face Mesh
- [ ] Iris
- [x] Hands
- [x] Pose
- [x] Holistic
- [ ] Selfie Segmentation
- [ ] Hair Segmentation
- [ ] Object Detection
- [ ] Box Tracking
- [ ] Instant Motion Tracking
- [ ] Objectron
- [ ] KNIFT
- [ ] AutoFlip
- [ ] MediaSequence
- [ ] YouTube 8M
<!-- GETTING STARTED -->
## Getting Started

### Prerequisites
* Python3
* Intel Realsense SDK and ROS Wrapper for Intel RealSense cameras <br>
  Follow the instructions found here, installing from Linux Debian Installation Guide: https://github.com/IntelRealSense/realsense-ros?tab=readme-ov-file <br>
  At the time of writing, this SDK is not compatible with Noble Numbat 24.04.04 LTS 6.14 kernel (https://github.com/IntelRealSense/librealsense/releases). <br>
  Check your system current kernel and available kernels with: <br>
  ```uname -r && dpkg --list | grep linux-image```
  <br>Reboot with a compatible kernel: Advanced > 6.08 (non-recovery mode)) <br>
  ```bash
  uname -r # Confirm your kernel
  # librealsense2-dkms
  version=$(apt show librealsense2-dkms 2>/dev/null | grep ^Version: | awk '{print $2}' | cut -d'-' -f1) # Dynamically extract and assign the librealsense-dkms version to variable "$version"
  sudo dkms build -m librealsense2-dkms -v "$version" -k 6.8.0-41-generic # Selectively build this version of librealsense2-dkms to this kernel
  sudo dkms install -m librealsense2-dkms -v "$version" -k 6.8.0-41-generic # And install
  ```
  <br>
  The following returns an error as it is not a kernel module and cannot be selectively installed to one compatible kernel. It still successfully installs to the correct kernel though, and shouldn't raise further errors.
  
  ```sudo apt install librealsense2-utils```
  
  Note: After this step: ```sudo apt-get install librealsense2-dkms```, the "Configuring Secure Boot" menu may appear. This requires you to set a Machine Owner Key (MOK).
    
* OpenCV
    ```sh
  python3 -m venv user_venvs/opencv && source user_venvs/opencv/bin/activate
    ```
    ```sh
  pip install opencv-python
    ```
* Media Pipe
  ```sh
  python3 -m venv user_venvs/mediapipe && source user_venvs/mediapipe/bin/activate
  ```
  ```sh
  pip install mediapipe
  ```
### Installation
1. Clone this repository into your ROS2 workspace/src directory.

   ```cd src/ && git clone https://github.com/LAIR-Lab/mp_ros2.git``` 
3. Run colcon_build from your ROS2 workspace directory.
<!-- USAGE EXAMPLES -->
## Usage
From another bash:
  ```sh
  source ros2_ws/install/setup.bash
  ros2 run mp_ros2 hands_detector_rs
  ```
```
cd ~/ros2_ws/
colcon build # Optional: --packages-select media_pipe_ros2 media_pipe_ros2_msg realsense-ros
source install/setup.bash
ros2 launch mp.launch.py
```
Can be launched with the following toggleable parameters: <br>
| Parameter | True (Default) | False |
|----------|----------|----------|
| face_on:=   | Detects face | Does not detect face |
| pose_on:=  | Detects pose | Does not detect pose |
| hands_on:=  | Detects hands | Does not detect hands |
| open_window:=  | Opens separate video window for visualization | Does not open window |

<!-- CONTACT -->
## Contact

Dieisson Martinelli - dmartinelli1997@gmail.com
