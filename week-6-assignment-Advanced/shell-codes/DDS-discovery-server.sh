#!/bin/bash

# Set your name and SID
NAME="Jamshidjon Ganiev"
SID="12200335"

# Source ROS 2 environment
source /opt/ros/humble/setup.bash

# Function to start the Discovery Server
start_discovery_server() {
    server_id=$1
    ip_address=$2
    port=$3
    fastdds discovery --server-id $server_id --ip-address $ip_address --port $port
}

# Function to set the ROS_DISCOVERY_SERVER environment variable
set_ros_discovery_server() {
    server_address=$1
    export ROS_DISCOVERY_SERVER=$server_address
}

# Start the Discovery Server with ID 0, default port 11811, and all available interfaces
start_discovery_server 0 "127.0.0.1" 11811

# Launch the listener demo and set the ROS_DISCOVERY_SERVER environment variable
set_ros_discovery_server "127.0.0.1:11811"
ros2 run demo_nodes_cpp listener --ros-args --remap __node:=listener_discovery_server

# Launch the talker demo and set the ROS_DISCOVERY_SERVER environment variable
set_ros_discovery_server "127.0.0.1:11811"
ros2 run demo_nodes_cpp talker --ros-args --remap __node:=talker_discovery_server

# Display your name and SID
echo "Name: $NAME"
echo "SID: $SID"

# Additional Concepts

# Server Redundancy
# Uncomment and customize this section if needed
# start_discovery_server 1 "127.0.0.1" 11888
# set_ros_discovery_server "127.0.0.1:11811;127.0.0.1:11888"

# Backup Server
# Uncomment and customize this section if needed
# start_discovery_server 0 "127.0.0.1" 11811 --backup
# set_ros_discovery_server "127.0.0.1:11811"

# Discovery Partitions
# Uncomment and customize this section if needed
# start_discovery_server 0 "127.0.0.1" 11811
# start_discovery_server 1 "127.0.0.1" 11888
# set_ros_discovery_server "127.0.0.1:11811;127.0.0.1:11888"

# ROS 2 Introspection
# Uncomment and customize this section if needed
# export FASTRTPS_DEFAULT_PROFILES_FILE="super_client_configuration_file.xml"
# ros2 daemon stop
# ros2 daemon start
# ros2 topic list
# ros2 node info /talker
# ros2 topic info /chatter
# ros2 topic echo /chatter
