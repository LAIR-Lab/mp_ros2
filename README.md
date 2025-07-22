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
  Follow the instructions found here, installing from Linux Debian Installation Guide:
  https://github.com/IntelRealSense/realsense-ros?tab=readme-ov-file <br>
  Note that at the time of writing, this SDK is not compatible with Jammy Jellyfish 6.8 or 6.14 kernels. So following the steps to install with the DKMS kernal module is not necessary. Commands that reference dpkg in sections will return errors though. This should not affect overall functionality. <br>
  Check your system current kernel and available kernels with: <br>
  ```uname -r && dpkg --list | grep linux-image``` <br>
  (Note: After this step: ```sudo apt-get install librealsense2-dkms```, the "Configuring Secure Boot" menu may appear. This requires you to set a Machine Owner Key (MOK))
    
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
 ```
  cd src/ && git clone https://github.com/LAIR-Lab/mp_ros2.git
  ``` 
2. Run colcon_build from your ROS2 workspace directory.
<!-- USAGE EXAMPLES -->
## Usage
From another bash:
  ```sh
  source ros2_ws/install/setup.bash
  ros2 run mp_ros2 hands_detector_rs
  ```
```
cd
cd ros2_ws/
colcon build # Optional: --packages-select media_pipe_ros2 media_pipe_ros2_msg realsense-ros
source install/setup.bash
ros2 launch mp.launch.py
```
Can be launched with the following toggleable parameters. : <br>
| Parameter | True (Default) | False |
|----------|----------|----------|
| face_on:=   | Detects face | Does not detect face |
| pose_on:=  | Detects pose | Does not detect pose |
| hands_on:=  | Detects hands | Does not detect hands |
| open_window:=  | Opens separate video window for visualization | Does not open window |

<!-- CONTACT -->
## Contact

Dieisson Martinelli - dmartinelli1997@gmail.com
