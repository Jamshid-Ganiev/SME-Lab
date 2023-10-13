#!/bin/bash

# Define the path to your ROS 2 workspace
ROS2_WS_PATH="/your/ros2/workspace/path"

# Initialize the ROS 2 workspace
mkdir -p $ROS2_WS_PATH/src
cd $ROS2_WS_PATH
colcon build --symlink-install

# Create a ROS 2 package
ros2 pkg create my_package --dependencies rclcpp std_msgs

# Write your C++ code for the custom allocator within my_package

# Build the ROS 2 package
colcon build --symlink-install

# Source the ROS 2 workspace
source $ROS2_WS_PATH/install/setup.bash

# Run your ROS 2 node
ros2 run my_package my_node

# Add your name and SID here
NAME="Your Name"
SID="Your SID"

# Display your name and SID
echo "Name: $NAME"
echo "SID: $SID"
