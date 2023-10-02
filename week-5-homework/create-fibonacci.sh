#!/bin/bash

# Define the path to the action_tutorials_interfaces package
package_path="/home/jamshid/Desktop/SME-Lab/week-5-homework/action/ros2_ws/src/action_tutorials_interfaces"

# Navigate to the action_tutorials_interfaces directory
cd "$package_path"

# Create the 'action' directory if it doesn't exist
mkdir -p action

# Define the content for Fibonacci.action
echo "int32 order" > action/Fibonacci.action
echo "---" >> action/Fibonacci.action
echo "int32[] sequence" >> action/Fibonacci.action
echo "---" >> action/Fibonacci.action
echo "int32[] partial_sequence" >> action/Fibonacci.action

# Add the necessary lines to CMakeLists.txt
echo "find_package(rosidl_default_generators REQUIRED)" >> CMakeLists.txt
echo "rosidl_generate_interfaces(\${PROJECT_NAME}" >> CMakeLists.txt
echo "  \"action/Fibonacci.action\"" >> CMakeLists.txt
echo ")" >> CMakeLists.txt

# Add the required dependencies to package.xml
echo "<buildtool_depend>rosidl_default_generators</buildtool_depend>" >> package.xml
echo "<depend>action_msgs</depend>" >> package.xml
echo "<member_of_group>rosidl_interface_packages</member_of_group>" >> package.xml

# Navigate to the root of the workspace
cd /home/jamshid/Desktop/SME-Lab/week-5-homework/action/ros2_ws

# Source the workspace
source install/setup.bash  # Use setup.bat on Windows

# Build the package
colcon build

# Check that the action definition exists
ros2 interface show action_tutorials_interfaces/action/Fibonacci

