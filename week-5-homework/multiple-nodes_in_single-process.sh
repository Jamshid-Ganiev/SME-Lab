#!/bin/bash

# Start the component container in the first shell
echo "Starting the component container..."
ros2 run rclcpp_components component_container &

# Wait for a moment to ensure the container is running
sleep 2

# Verify that the container is running via ros2 command line tools
echo "Verifying the container status..."
ros2 component list

# Load the talker component in the second shell
echo "Loading the talker component..."
ros2 component load /ComponentManager composition composition::Talker &

# Load the listener component in the second shell
echo "Loading the listener component..."
ros2 component load /ComponentManager composition composition::Listener &

# Wait for a moment to ensure components are loaded
sleep 2

# Verify the status of the components
echo "Verifying the component status..."
ros2 component list

# Unload the talker and listener components
echo "Unloading the talker and listener components..."
ros2 component unload /ComponentManager 1 2

# Wait for a moment to ensure components are unloaded
sleep 2

# Verify the status after unloading
echo "Verifying the component status after unloading..."
ros2 component list

# Stop the component container
echo "Stopping the component container..."
pkill -SIGINT component_container

# Wait for a moment to ensure the container is stopped
sleep 2

# Verify the container status after stopping
echo "Verifying the container status after stopping..."
ros2 component list

echo "Script execution completed."

