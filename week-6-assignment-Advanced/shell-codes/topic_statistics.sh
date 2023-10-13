#!/bin/bash

# Name, SID, and the ROS 2 workspace path
NAME="Jamshidjon Ganiev"
SID="12200335"
ROS2_WS_PATH=~/Desktop/SME-Lab/week-6-assignment-Advanced/ros2_ws

# Source the ROS 2 environment
source /opt/ros/humble/setup.bash

# Navigate to the ROS 2 workspace
cd $ROS2_WS_PATH

# Create a new ROS 2 package for your project
ros2 pkg create my_project_package

# Download the subscriber node code
wget -O $ROS2_WS_PATH/src/cpp_pubsub/src/member_function_with_topic_statistics.cpp https://raw.githubusercontent.com/ros2/examples/humble/rclcpp/topics/minimal_subscriber/member_function_with_topic_statistics.cpp

# Update the package's CMakeLists.txt to add the executable for the new node
echo "add_executable(listener_with_topic_statistics src/member_function_with_topic_statistics.cpp)" >> $ROS2_WS_PATH/src/my_project_package/CMakeLists.txt
echo "ament_target_dependencies(listener_with_topic_statistics rclcpp std_msgs)" >> $ROS2_WS_PATH/src/my_project_package/CMakeLists.txt
echo "" >> $ROS2_WS_PATH/src/my_project_package/CMakeLists.txt

# Build the ROS 2 workspace
colcon build

# Run the subscriber node with statistics enabled
ros2 run my_project_package listener_with_topic_statistics

# Display your name and SID
echo "Name: $NAME"
echo "SID: $SID"
