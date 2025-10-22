#!/bin/bash

set -e

EXECUTABLE_PATH="/home/lairlab-squirtle/ros2_ws/install/media_pipe_ros2/lib/media_pipe_ros2/detector"
VENV_PYTHON="/home/lairlab-squirtle/ros2_ws/venv/bin/python3"

if [ ! -f "$EXECUTABLE_PATH" ]; then
    echo "Error Executable file not found at $EXECUTABLE_PATH"
    exit 1
fi

sed -i "1s|.*|#!$VENV_PYTHON|" "$EXECUTABLE_PATH"

echo "Message: fix_shebang.bash successfully run."