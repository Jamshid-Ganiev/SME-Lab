# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp

# Include any dependencies generated for this target.
include CMakeFiles/appliance_server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/appliance_server.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/appliance_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/appliance_server.dir/flags.make

CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o: CMakeFiles/appliance_server.dir/flags.make
CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o: /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp/src/appliance_server.cpp
CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o: CMakeFiles/appliance_server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o -MF CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o.d -o CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o -c /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp/src/appliance_server.cpp

CMakeFiles/appliance_server.dir/src/appliance_server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/appliance_server.dir/src/appliance_server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp/src/appliance_server.cpp > CMakeFiles/appliance_server.dir/src/appliance_server.cpp.i

CMakeFiles/appliance_server.dir/src/appliance_server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/appliance_server.dir/src/appliance_server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp/src/appliance_server.cpp -o CMakeFiles/appliance_server.dir/src/appliance_server.cpp.s

# Object files for target appliance_server
appliance_server_OBJECTS = \
"CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o"

# External object files for target appliance_server
appliance_server_EXTERNAL_OBJECTS =

appliance_server: CMakeFiles/appliance_server.dir/src/appliance_server.cpp.o
appliance_server: CMakeFiles/appliance_server.dir/build.make
appliance_server: /opt/ros/humble/lib/librclcpp_action.so
appliance_server: /opt/ros/humble/lib/librclcpp.so
appliance_server: /opt/ros/humble/lib/liblibstatistics_collector.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
appliance_server: /opt/ros/humble/lib/librcl_action.so
appliance_server: /opt/ros/humble/lib/librcl.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
appliance_server: /opt/ros/humble/lib/librcl_yaml_param_parser.so
appliance_server: /opt/ros/humble/lib/libyaml.so
appliance_server: /opt/ros/humble/lib/libtracetools.so
appliance_server: /opt/ros/humble/lib/librmw_implementation.so
appliance_server: /opt/ros/humble/lib/libament_index_cpp.so
appliance_server: /opt/ros/humble/lib/librcl_logging_spdlog.so
appliance_server: /opt/ros/humble/lib/librcl_logging_interface.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
appliance_server: /opt/ros/humble/lib/libfastcdr.so.1.0.24
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
appliance_server: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_generator_py.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/libaction_msgs__rosidl_generator_c.so
appliance_server: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_generator_py.so
appliance_server: /usr/lib/x86_64-linux-gnu/libpython3.10.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/librosidl_typesupport_c.so
appliance_server: /opt/ros/humble/lib/librcpputils.so
appliance_server: /opt/ros/humble/lib/libunique_identifier_msgs__rosidl_generator_c.so
appliance_server: /opt/ros/humble/lib/librmw.so
appliance_server: /opt/ros/humble/lib/librosidl_runtime_c.so
appliance_server: /opt/ros/humble/lib/librcutils.so
appliance_server: CMakeFiles/appliance_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable appliance_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/appliance_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/appliance_server.dir/build: appliance_server
.PHONY : CMakeFiles/appliance_server.dir/build

CMakeFiles/appliance_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/appliance_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/appliance_server.dir/clean

CMakeFiles/appliance_server.dir/depend:
	cd /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/src/smart_home_cpp /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp /home/jamshid/Desktop/SME-Lab/week-7-homework/ros2_ws/build/smart_home_cpp/CMakeFiles/appliance_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/appliance_server.dir/depend

