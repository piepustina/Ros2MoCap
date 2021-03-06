cmake_minimum_required(VERSION 3.5)
project(mocap_optitrack_w2b)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

# Add the custom interfaces for the mocap system
find_package(rclcpp REQUIRED)
find_package(mocap_optitrack_interfaces REQUIRED)

#Include the headers
include_directories(include include/Eigen)

#Create the executables
add_executable(mocap_optitrack_w2b src/WorldToBase.cpp)
ament_target_dependencies(mocap_optitrack_w2b rclcpp mocap_optitrack_interfaces)


install(TARGETS 
  mocap_optitrack_w2b
  DESTINATION lib/${PROJECT_NAME})

ament_package()
