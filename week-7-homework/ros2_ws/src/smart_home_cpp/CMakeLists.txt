cmake_minimum_required(VERSION 3.8)
project(smart_home_cpp)




# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(action_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)
find_package(rosbag2_storage REQUIRED)


rosidl_generate_interfaces(smart_home_cpp
  srv/ApplianceControl.action
)


# Define the executable for the appliance server
add_executable(appliance_server src/appliance_server.cpp)
ament_target_dependencies(appliance_server rclcpp rclcpp_action)

# Define the executable for the appliance client
add_executable(appliance_client src/appliance_client.cpp)
ament_target_dependencies(appliance_client rclcpp rclcpp_action action_msgs)



install(TARGETS
  appliance_server
  appliance_client
  DESTINATION lib/${PROJECT_NAME})


ament_package()

