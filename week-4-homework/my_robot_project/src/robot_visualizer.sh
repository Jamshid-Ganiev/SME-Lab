#!/bin/bash
# Script: robot_visualizer.sh
# Description: Launch a virtual robot simulation and visualize distance measurements using RQT.

# Source the ROS 2 environment setup script
source /opt/ros/humble/setup.bash

# Launch the ROS 2 turtlesim node for virtual robot simulation
ros2 run turtlesim turtlesim_node &

# Give it some time to start (adjust sleep time as needed)
sleep 3

# Launch a custom ROS 2 node to simulate distance measurements (you need to create this node)
ros2 run my_robot_project distance_sim_node &

# Give it some time to start (adjust sleep time as needed)
sleep 3

# Launch RQT with the plot plugin to visualize distance measurements
rqt_plot /your_robot/distance_measurement

