# syntax=docker/dockerfile:1

#######
# Stage 1: Build (Compilers, dev headers, build tools)
#######

FROM ros:jazzy AS builder

# Install system-wide (not just python) tools
RUN apt update && apt install -y --no-install-recommends \
    python3-colcon-common-extensions \
    python3-empy \
    python3-vcstool \
    python3-rosdep \
    git \
    pip \
    python3-matplotlib \
    python3-numpy \
    python3-dev \
    python3-opencv \
    ffmpeg \
    libgl1-mesa-dri \
    mesa-utils \
    build-essential \
    cmake \
    make \
    curl \
    ros-jazzy-librealsense2* \
    ros-jazzy-rmw-cyclonedds-cpp \
    ros-jazzy-realsense2-* \
    ros-jazzy-cv-bridge \
    && rm -rf /var/lib/apt/lists/*

# Register librealsense server's public key to access DKMS packages
USER root
RUN mkdir -p /etc/apt/keyrings && \
    curl -sSf https://librealsense.intel.com/Debian/librealsense.pgp \
    | tee /etc/apt/keyrings/librealsense.pgp > /dev/null && \
    apt-get update && apt-get install -y apt-transport-https && \
    echo "deb [signed-by=/etc/apt/keyrings/librealsense.pgp] \
    https://librealsense.intel.com/Debian/apt-repo $(lsb_release -cs) main" \
    | tee /etc/apt/sources.list.d/librealsense.list && \
    apt-get update && apt-get install -y \
    librealsense2-dev \
    librealsense2-utils \
    && rm -rf /var/lib/apt/lists/*
USER ros 

# Set ROS Middleware implementation persistently for network communication (sub and pub). For networking, fast dds does not allow high bandwidth video transmission. Could use fastrtps but may cause issues communicating across containers.
ENV RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

# Initialize rosdep
USER root
RUN rosdep init 2>/dev/null || true && rosdep update
USER ros

USER root
RUN apt remove -y python3-scipy
RUN apt remove -y python3-kiwisolver

RUN apt update && apt install -y \
    python3-pip \
    python3-setuptools \
    python3-opencv \
    python3-pyqt5

RUN python3 -m pip install --no-cache-dir --break-system-packages \
    mediapipe \
    pyserial \
    catkin_pkg \
    sounddevice

RUN python3 -m pip install --no-cache-dir --break-system-packages \
    jax==0.7.1 \
    jaxlib==0.7.1

# Create ROS2 workspace and copy src
WORKDIR /mpros2
COPY src/ src/

# Clone mpros2 into src
WORKDIR /mpros2/src
RUN git clone https://github.com/IntelRealSense/realsense-ros.git -b ros2-master
RUN git clone https://github.com/LAIR-Lab/mp_ros2.git
WORKDIR /mpros2

# Install pkg dependencies
RUN apt-get update && rosdep install --rosdistro jazzy --from-paths src --ignore-src -r -y

# Build ws
RUN /bin/bash -c "source /opt/ros/jazzy/setup.sh && \
    colcon build --merge-install"

#######
# Stage 2: Runtime
#######

USER root
RUN apt update && apt install -y --no-install-recommends \
    python3-colcon-common-extensions \
    python3-pip \
    python3-pyqt5 \
    xvfb \
    build-essential \
    cmake \
    make \
    python3.12 \
    python3.12-dev \
    usbutils \
    x11-apps \
    && rm -rf /var/lib/apt/lists/*
RUN apt update && apt install -y sudo

USER root
RUN mkdir -p /etc/apt/keyrings && \
    curl -sSf https://librealsense.intel.com/Debian/librealsense.pgp \
    | tee /etc/apt/keyrings/librealsense.pgp > /dev/null && \
    apt-get update && apt-get install -y apt-transport-https && \
    echo "deb [signed-by=/etc/apt/keyrings/librealsense.pgp] \
    https://librealsense.intel.com/Debian/apt-repo $(lsb_release -cs) main" \
    | tee /etc/apt/sources.list.d/librealsense.list && \
    apt-get update && apt-get install -y \
    librealsense2-utils \
    librealsense2-dev \
    && rm -rf /var/lib/apt/lists/*

# Create non-root user with no-password sudo rights
RUN useradd -m ros && \
    echo "ros ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers
USER ros
WORKDIR /mpros2

# # Copy built artifacts from Stage 1 (builder)
# COPY --from=builder /mpros2/install /mpros2/install/
# COPY --from=builder /mpros2/src /mpros2/src/ 

CMD ["bash"]