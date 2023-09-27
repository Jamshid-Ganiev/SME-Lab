# SME-Lab
Smart Mobility Engineering Lab

## Week 2 | Ubuntu Installation:
![ubuntu](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/c46a9103-bd95-4a68-93a9-0c072cbbf81d)

## week 4 | ROS2 & RQT | Turtlesim | Calcon
### TurtleSim Spiral Drawing Script
## Overview

This script, `turtlesimm.sh`, launches TurtleSim, a simple 2D robot simulator, and instructs a turtle to draw a captivating and colorful spiral pattern. 
The script performs the following actions:

- Launches TurtleSim within the ROS 2 environment.
- Sets the background color of the TurtleSim window.
- Guides the turtle to create a visually appealing spiral pattern by repeatedly changing its pen color, moving it forward, and turning it.
- Stops the turtle gracefully when the spiral drawing is complete.

# My ROS 2 Project

[Beginner: Client libraries](https://github.com/Jamshid-Ganiev/SME-Lab/tree/main/week-4-homework/ros2_ws)

## How it Works
- This project includes a ROS 2 package named "my_package."
- Inside "my_package," there is a Python node called "my_node" defined in the `my_node.py` script.
- When you run the `my_node` executable, it does the following:
  - Initializes a ROS 2 node.
  - Logs the message "Hello, ROS 2!" to the console using the `rclpy` library.
  - The node continues running until you stop it with a keyboard interrupt (Ctrl+C).
