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
CMAKE_SOURCE_DIR = /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces

# Include any dependencies generated for this target.
include CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/flags.make

rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/lib/rosidl_generator_c/rosidl_generator_c
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/lib/python3.8/site-packages/rosidl_generator_c/__init__.py
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/action__type_support.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__functions.c.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__functions.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__struct.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/idl__type_support.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__functions.c.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__functions.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__struct.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/msg__type_support.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: /opt/ros/foxy/share/rosidl_generator_c/resource/srv__type_support.h.em
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: rosidl_adapter/mocap_interfaces/msg/RigidBody.idl
rosidl_generator_c/mocap_interfaces/msg/rigid_body.h: rosidl_adapter/mocap_interfaces/msg/RigidBodyArray.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C code for ROS interfaces"
	/usr/bin/python3 /opt/ros/foxy/share/rosidl_generator_c/cmake/../../../lib/rosidl_generator_c/rosidl_generator_c --generator-arguments-file /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c__arguments.json

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.h

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__struct.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__struct.h

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__type_support.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__type_support.h

rosidl_generator_c/mocap_interfaces/msg/rigid_body_array.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/rigid_body_array.h

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.h

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__struct.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__struct.h

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__type_support.h: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__type_support.h

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c

rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.o: CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/flags.make
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.o: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.o   -c /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c > CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.i

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c -o CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.s

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.o: CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/flags.make
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.o: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.o   -c /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c > CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.i

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c -o CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.s

# Object files for target mocap_interfaces__rosidl_generator_c
mocap_interfaces__rosidl_generator_c_OBJECTS = \
"CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.o" \
"CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.o"

# External object files for target mocap_interfaces__rosidl_generator_c
mocap_interfaces__rosidl_generator_c_EXTERNAL_OBJECTS =

libmocap_interfaces__rosidl_generator_c.so: CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c.o
libmocap_interfaces__rosidl_generator_c.so: CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c.o
libmocap_interfaces__rosidl_generator_c.so: CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/build.make
libmocap_interfaces__rosidl_generator_c.so: /opt/ros/foxy/lib/librosidl_runtime_c.so
libmocap_interfaces__rosidl_generator_c.so: /opt/ros/foxy/lib/librcutils.so
libmocap_interfaces__rosidl_generator_c.so: CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C shared library libmocap_interfaces__rosidl_generator_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/build: libmocap_interfaces__rosidl_generator_c.so

.PHONY : CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/build

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/clean

CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/rigid_body.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__struct.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__type_support.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/rigid_body_array.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__struct.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__type_support.h
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body__functions.c
CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend: rosidl_generator_c/mocap_interfaces/msg/detail/rigid_body_array__functions.c
	cd /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_interfaces /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/src/mocap_interfaces /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces /home/pietro/Scrivania/TESI/ROS2/MoCap/Ros2MoCap/build/mocap_interfaces/CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mocap_interfaces__rosidl_generator_c.dir/depend
