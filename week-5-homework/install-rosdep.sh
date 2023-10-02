#!/bin/bash

# Check if rosdep is installed. If not, install it.
if ! command -v rosdep &> /dev/null
then
    echo "rosdep is not installed. Installing..."
    sudo apt-get install python3-rosdep
fi

# Initialize and update rosdep if necessary.
sudo rosdep init
rosdep update

# Specify the ROS 2 workspace path.
ros2_ws="/home/jamshid/ros2_workspace"

# Check if the ROS 2 workspace directory exists.
if [ -d "$ros2_ws" ]; then
    echo "ROS 2 workspace found at $ros2_ws"
    cd "$ros2_ws"
    
    # Run rosdep install to install dependencies.
    rosdep install --from-paths src -y --ignore-src
    
    echo "rosdep installation and dependency installation complete."
else
    echo "ROS 2 workspace not found at $ros2_ws. Please provide the correct path."
    exit 1
fi

