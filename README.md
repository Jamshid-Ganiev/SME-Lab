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
  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/341402c6-ed27-4afc-8b6b-50d9f37a5c65)
  <hr/>
  
  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/712fced8-59a6-4faa-ba66-bb675cb8e0a8)
  <hr/>

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/0ab2bfd5-7e16-45d2-94f8-882ac68e236e)

  ### CLI tools:

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/c84aebf5-f8be-432d-8cd5-5b522bea2b14)

  ### Talker and Listener 
  ![C++ talker and listener](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/050ed2b5-a722-4bb6-92db-ca7ce5e7305d)

  ![Python talker and listener](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/0faf70e4-7816-4026-a4a7-0052e57ee667)





# My ROS 2 Project

[Beginner: Client libraries](https://github.com/Jamshid-Ganiev/SME-Lab/tree/main/week-4-homework/ros2_ws)

## How it Works
- This project includes a ROS 2 package named "my_package."
- Inside "my_package," there is a Python node called "my_node" defined in the `my_node.py` script.
- When you run the `my_node` executable, it does the following:
  - Initializes a ROS 2 node.
  - Logs the message "Hello, ROS 2!" to the console using the `rclpy` library.
  - The node continues running until you stop it with a keyboard interrupt (Ctrl+C).

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/53dc0b59-c1fb-4a89-b6e8-a66659354d77)


## week 3 Intermediate | Action & Client Python | Multiple nodes in a single process
### fibonacci sequence snapshot:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/d5d9cf43-d2e8-4187-b994-d8d9026cdb34)
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/264c61c2-c3be-4c72-aa2b-34e2868dab0c)

### Multiple nodes in a single process
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/04756a9a-b14d-4bcc-9fa3-1d17e672c831)

### Talker and Listener | C++
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/788bfe31-d387-4da1-be7b-4d2c1a64430f)

<hr/>

# Week 6 Assignment | ROS2 Advanced Section
## Enabling topic statistics (C++):
![snapshot](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/88a2359f-f1b2-4631-b298-f0eb59748aaa)

### CMakeLists.txt

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/04dcfa45-cc5f-447f-be58-98fcb75e75c7)

### RUN ---> Outcome:

![Publisher and Subscriber](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/89edbb77-d9d2-4db9-96f5-d6c072213298)

### Published Statistics Data:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/9fb7c9a2-452b-418c-9bab-3def2c96ec1a)

---------------------------------------------

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/33fbc8bc-1563-4733-93e3-eff57f36fed9)

## Using Fast DDS Discovery Server as discovery protocol:

### Server --> Talker --> Listener

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/3127db76-be74-4eb9-b64e-de20d893b9fb)

## Implementing a custom memory allocator:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/7a1030ed-5be0-497c-b0f8-b1244f1bda3e)

## Unlocking the potential of Fast DDS middleware:

### New workspace created:

### Writer & Reader:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/e46c8c85-4545-4270-ace4-83bed8d2b2c8)

### Service & Client:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/5d45d0b6-41f8-4ff2-a628-ac182978f8e5)

## Recording a bag from a node:

### Bag Recorder

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/74a8fac4-24ec-4af6-9a13-8b141cce63da)

## Reading from a bag file:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/b1e04d42-4fb2-43c6-8973-0acb9bde1a7a)


## week 7 | Action server & Action client | Smart home
# Smart Home ROS Client and Server
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/e49a37bf-cb08-4a90-8b5f-828d1cee6665)


The Smart Home ROS Client and Server is a ROS 2 (Robot Operating System 2) project that allows users to control and monitor smart home appliances through a user-friendly client application. Simultaneously, it provides a server that handles these appliance control actions seamlessly.

## Introduction

In the era of smart homes, the ability to remotely control and monitor household appliances is a valuable convenience. The Smart Home ROS Client and Server offers an open-source solution for managing your appliances in a more interactive and efficient manner. Whether it's turning on the lights, checking the status of your fridge, or adjusting the temperature with your air conditioner, this project simplifies the control process.

## How It Works

The project consists of two primary components:

1. **Appliance Client**: The client application provides an intuitive user interface for controlling various smart home appliances. It allows you to interact with the appliances by choosing from a list of options, specifying whether to turn them on or off, and even receiving feedback on the results.

2. **Appliance Server**: The server node is responsible for handling appliance control actions. It communicates with the client, interprets user commands, and controls the actual appliances based on the received requests. Additionally, it provides feedback on the status of the control operations.

The Smart Home ROS Client and Server leverages the ROS 2 Action API to manage appliances efficiently. You can control the state of appliances such as the TV, Fridge, Boiler, Air Conditioner, and Lights with ease. Whether you're at home or away, this project allows you to stay connected with your smart home.

## Results

### Efficient Appliance Control
The Appliance Server effectively processes user commands and controls smart home appliances. It promptly executes actions like turning devices on or off and provides feedback on the success or failure of these operations.

With the Smart Home ROS Client and Server, you can enjoy enhanced control and monitoring of your smart home appliances, contributing to a more convenient and efficient living environment.

## Prerequisites
Before getting started, ensure that you have the necessary prerequisites installed on your system. Refer to the [Prerequisites](#prerequisites) section in this README for detailed requirements and setup instructions.


## Interaction Diagram:
# Smart Home ROS 2 Application

The Smart Home ROS 2 Application is designed to control and manage various appliances in a smart home environment. It consists of two primary components: the Appliance Client Node and the Appliance Server Node, which communicate through ROS 2 topics and services.

## Architecture Overview

The project's architecture can be visualized as follows:

```plaintext
+------------------------------------+
|    Smart Home ROS 2 Application    |
+------------------------------------+
       |              |
       |              |
       |              |
       v              v
+------------+    +--------------+
| Appliance  |    | Appliance    |
| Client     |    | Server       |
| Node       |    | Node         |
+------------+    +--------------+
    |  |   |         |  |   |
    v  v   v         v  v   v
+--------+--------+  +--------+--------+
| ROS 2  | ROS 2  |  | ROS 2  | ROS 2  |
| Topics | Services|  | Topics | Services|
| (rclcpp)| (rclcpp)|  | (rclcpp)| (rclcpp)|
+--------+--------+  +--------+--------+
    |  |   |         |  |   |
    v  v   v         v  v   v
+------------+   +------------+
| Topic      |   | Service    |
| Examples   |   | Examples    |
| (Control)  |   | (List, Get) |
+------------+   +------------+
    |  |   |         |  |   |
    v  v   v         v  v   v
+----------------------------------------+
|  ROS 2 Middleware Layer               |
|  (Publish-Subscribe and RPC)        |
+----------------------------------------+
    |  |   |         |  |   |
    v  v   v         v  v   v
+----------------------------------------+
|  Hardware and Appliances             |
|  (e.g., Lights, TV, Fridge, Boiler) |
+----------------------------------------+










