# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub

# Include any dependencies generated for this target.
include CMakeFiles/mocap_pub.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mocap_pub.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mocap_pub.dir/flags.make

CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.o: CMakeFiles/mocap_pub.dir/flags.make
CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.o: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapPublisher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.o -c /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapPublisher.cpp

CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapPublisher.cpp > CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.i

CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapPublisher.cpp -o CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.s

CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.o: CMakeFiles/mocap_pub.dir/flags.make
CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.o: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapNatNetClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.o -c /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapNatNetClient.cpp

CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapNatNetClient.cpp > CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.i

CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub/src/MoCapNatNetClient.cpp -o CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.s

# Object files for target mocap_pub
mocap_pub_OBJECTS = \
"CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.o" \
"CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.o"

# External object files for target mocap_pub
mocap_pub_EXTERNAL_OBJECTS =

mocap_pub: CMakeFiles/mocap_pub.dir/src/MoCapPublisher.cpp.o
mocap_pub: CMakeFiles/mocap_pub.dir/src/MoCapNatNetClient.cpp.o
mocap_pub: CMakeFiles/mocap_pub.dir/build.make
mocap_pub: /opt/ros/foxy/lib/librclcpp.so
mocap_pub: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/install/mocap_interfaces/lib/libmocap_interfaces__rosidl_typesupport_introspection_c.so
mocap_pub: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/install/mocap_interfaces/lib/libmocap_interfaces__rosidl_typesupport_c.so
mocap_pub: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/install/mocap_interfaces/lib/libmocap_interfaces__rosidl_typesupport_introspection_cpp.so
mocap_pub: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/install/mocap_interfaces/lib/libmocap_interfaces__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/liblibstatistics_collector.so
mocap_pub: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/librcl.so
mocap_pub: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/librmw_implementation.so
mocap_pub: /opt/ros/foxy/lib/librmw.so
mocap_pub: /opt/ros/foxy/lib/librcl_logging_spdlog.so
mocap_pub: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.5.0
mocap_pub: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
mocap_pub: /opt/ros/foxy/lib/libyaml.so
mocap_pub: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/libtracetools.so
mocap_pub: /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/install/mocap_interfaces/lib/libmocap_interfaces__rosidl_generator_c.so
mocap_pub: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
mocap_pub: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
mocap_pub: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
mocap_pub: /opt/ros/foxy/lib/librosidl_typesupport_c.so
mocap_pub: /opt/ros/foxy/lib/librcpputils.so
mocap_pub: /opt/ros/foxy/lib/librosidl_runtime_c.so
mocap_pub: /opt/ros/foxy/lib/librcutils.so
mocap_pub: CMakeFiles/mocap_pub.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable mocap_pub"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mocap_pub.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mocap_pub.dir/build: mocap_pub

.PHONY : CMakeFiles/mocap_pub.dir/build

CMakeFiles/mocap_pub.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mocap_pub.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mocap_pub.dir/clean

CMakeFiles/mocap_pub.dir/depend:
	cd /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_pub /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_pub/CMakeFiles/mocap_pub.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mocap_pub.dir/depend

