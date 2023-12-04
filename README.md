# SME-Lab
Smart Mobility Engineering Lab

![Final project](https://github.com/Jamshid-Ganiev/SME-Lab/tree/main/Final-Project)

## Week 2 | Ubuntu Installation:
![ubuntu](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/c46a9103-bd95-4a68-93a9-0c072cbbf81d)

## week 4 | ROS2 & RQT | Turtlesim | Colcon
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

  ### Launching nodes:

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/bbdda750-3ffc-44e8-ba23-8fb6a0d01961)

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


# Week 3 Intermediate | Action & Client Python | Multiple nodes in a single process
### fibonacci sequence snapshot:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/d5d9cf43-d2e8-4187-b994-d8d9026cdb34)
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/264c61c2-c3be-4c72-aa2b-34e2868dab0c)

### writing an action server and client (python)

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/028cf11e-bf59-45cf-8e03-1be51bb8b34e)

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/67f1438a-90af-47e4-bbc4-ac317a44f0bc)

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


# Week 7 | Action server & Action client | Smart home
# Smart Home ROS Client and Server
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/e49a37bf-cb08-4a90-8b5f-828d1cee6665)


The Smart Home ROS Client and Server is a ROS 2 (Robot Operating System 2) project that allows users to control and monitor smart home appliances through a user-friendly client application. Simultaneously, it provides a server that handles these appliance control actions seamlessly.

## Introduction

The Smart Home ROS Client and Server offers an open-source solution for managing your appliances in a more interactive and efficient manner. Whether it's turning on the lights, checking the status of your fridge, or adjusting the temperature with your air conditioner, this project simplifies the control process.

## How It Works

The project consists of two primary components:

1. **Appliance Client**: The client application provides an intuitive user interface for controlling various smart home appliances. It allows you to interact with the appliances by choosing from a list of options, specifying whether to turn them on or off, and even receiving feedback on the results.

2. **Appliance Server**: The server node is responsible for handling appliance control actions. It communicates with the client, interprets user commands, and controls the actual appliances based on the received requests. Additionally, it provides feedback on the status of the control operations.

The Smart Home ROS Client and Server leverages the ROS 2 Action API to manage appliances efficiently. You can control the state of appliances such as the TV, Fridge, Boiler, Air Conditioner, and Lights with ease. Whether you're at home or away, this project allows you to stay connected with your smart home.

## Interaction Diagram | Smart Home Ros2:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/8bb1d70d-a88d-4233-b6e4-20456f353b16)

<hr/>

# Week 8 | Mid-Term Assignment | Dynamic Fleet Manager

## Purpose
<p>This project aims to streamline fleet management tasks using ROS2, making it accessible via a user-friendly CLI and providing comprehensive documentation for users.
</description></p>

## The project consists of three main components:

1. **Fleet Management Action Server:**
   - Provides an Action Server for fleet management tasks.
   - Handles incoming fleet management requests from clients.
   - Generates real-time feedback for clients to monitor the progress of tasks.
   - Calculates and delivers results to clients upon task completion.

2. **Fleet Management Action Client:**
   - Interacts with users through a command-line interface.
   - Sends fleet management requests to the server.
   - Receives and displays real-time feedback on task progress.
   - Handles and displays results once the task is successfully completed.

3. **Fleet Management Action:**
   - Defines a custom action for fleet management tasks.
   - Contains two main components: Goal and Feedback.
   
   - **Goal:**
     - Represents the user's request for fleet management.
     - Consists of an array of fleet data entries, where each entry includes:
       - Departure city
       - Destination city
       - Weight of the delivery in tons.

   - **Feedback:**
     - Provides real-time updates on the progress of fleet management tasks.
     - Includes a completion percentage to track task execution.

   - **Result:**
     - Represents the outcome of the fleet management task.
     - Contains:
       - Departure city
       - Destination city
       - Estimated time in hours
       - Estimated price in USD
       - Delivery tracking link.

   - The Fleet Management Action defines the structure for communication between the Fleet Management Server and Client nodes, facilitating the execution of logistics tasks with real-time feedback.


### Task 1
![FleetManagement.action](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/4bb1fa0f-21fd-467e-abf1-6234b4b2a6cd)

### Task 2 & 3

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/9c629628-6fcf-4198-9905-24495dbf3145)

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/394182e9-9e0a-4e5a-b678-39e9a02981b9)

### Task 4 | A professional Command Line Interface has been created using 'click' library in Python

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/764716b8-80a0-4c4c-84fe-bfc9a4fd30d1)

#### CLI Outline:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/4dfe4825-d1a0-4015-bd2e-55140c3b7b7b)


### Project Structure

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/9253911f-1562-40ea-a6b4-b6cd52c0b3d1)

# Testing with Scenarios

## 1) Example Fleet Management Scenario | Seoul ---> Incheon

**Goal:**
- The user initiates a fleet management request from **Seoul** to **Incheon** with a substantial cargo of **50 tons**.
- The user specifies the following details in the goal:
  - Departure city: Seoul
  - Destination city: Incheon
  - Weight of the delivery: 50 tons.

**Feedback:**
- The **Fleet Management Server** processes the request.
- The server provides real-time feedback to the client, updating the completion percentage.
- As the task progresses, the completion percentage increases, indicating the movement of the substantial 50-ton delivery fleet.

**Result:**
- Upon successful completion of the task, the server sends the result back to the client.
- The result contains essential information about the logistics task:
  - Departure city: Seoul
  - Destination city: Incheon
  - Estimated time for delivery: 1 hours
  - Estimated price: $464
  - Delivery tracking link: [Example Tracking Link](https://example-tracking-link/seoul-incheon-50-tons-delivery).

This scenario showcases the flexibility of the Fleet Management Action to handle larger cargo loads, in this case, a 50-ton delivery, from Seoul to Incheon, providing accurate estimates and real-time tracking.

### Photo Snapshots:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/511406ac-f2a7-4c83-aeb2-6da232b88c8f)

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/f457f5d4-630b-4463-b75b-372cb0c271ee)


## 2) Example Fleet Management Scenario | Busan ---> Suwon

**Goal:**
- The user initiates a fleet management request from **Pusan** to **Suwon**.
- The user specifies the following details in the goal:
  - Departure city: Pusan
  - Destination city: Suwon
  - Weight of the delivery: 25 tons.

**Feedback:**
- The **Fleet Management Server** processes the request.
- The server provides real-time feedback to the client, updating the completion percentage.
- As the task progresses, the completion percentage increases, indicating the movement of the 25-ton delivery fleet from Pusan to Suwon.

**Result:**
- Upon successful completion of the task, the server sends the result back to the client.
- The result contains essential information about the logistics task:
  - Departure city: Pusan
  - Destination city: Suwon
  - Estimated time for delivery: 5 hours
  - Estimated price: $5152
  - Delivery tracking link: [Example Tracking Link](https://example-tracking-link/pusan-suwon-25-tons-delivery).

This scenario demonstrates the Fleet Management Action's ability to handle cargo delivery tasks, in this case, a 25-ton delivery, from Pusan to Suwon, providing real-time feedback and accurate estimates.

### Photo Snapshots:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/d5f80624-e824-4abe-b029-8d7afd12129e)

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/0fb355de-8d88-4642-a3ed-21b68ed474b6)












