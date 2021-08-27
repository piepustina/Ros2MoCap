cmake_minimum_required(VERSION 3.5)
project(world_to_base)

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
find_package(mocap_interfaces REQUIRED)

#Include the headers
include_directories(include)

#Create the executables
add_executable(world_to_base src/WorldToBase.cpp)
ament_target_dependencies(world_to_base rclcpp mocap_interfaces)


install(TARGETS 
  world_to_base
  DESTINATION lib/${PROJECT_NAME})

ament_package()
