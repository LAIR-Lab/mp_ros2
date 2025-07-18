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
<!-- CONTACT -->
## Contact

Dieisson Martinelli - dmartinelli1997@gmail.com
