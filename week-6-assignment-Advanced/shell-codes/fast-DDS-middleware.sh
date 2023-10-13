#!/bin/bash

# Set your ROS 2 workspace path
WORKSPACE_PATH=~/ros2_ws

# Create the ROS 2 workspace
mkdir -p $WORKSPACE_PATH/src
cd $WORKSPACE_PATH
colcon build

# Set environment variables for Fast DDS configuration
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
export RMW_FASTRTPS_USE_QOS_FROM_XML=1
export FASTRTPS_DEFAULT_PROFILES_FILE=$WORKSPACE_PATH/src/my_package/SyncAsync.xml  # Update with your XML file path

# Build your ROS 2 package
cd $WORKSPACE_PATH/src
ros2 pkg create --build-type ament_cmake --dependencies rclcpp std_msgs my_package
cd my_package

# Create a synchronous/asynchronous publisher and subscriber
# Implement these in sync_async_publisher.cpp and sync_async_subscriber.cpp

# Create a service and client
# Implement these in ping_service.cpp and ping_client.cpp

# Define the package dependencies in package.xml

# Define the executables in CMakeLists.txt
# See the CMakeLists.txt in your initial instructions for details

# Build the package
cd $WORKSPACE_PATH
colcon build

# Source the workspace setup file
source $WORKSPACE_PATH/install/setup.bash

# Run the nodes, service, and client
# Use the 'ros2 run' command to execute the nodes, service, and client
# For example:
# ros2 run my_package SyncAsyncPublisher
# ros2 run my_package SyncAsyncSubscriber
# ros2 run my_package ping_service
# ros2 run my_package ping_client

