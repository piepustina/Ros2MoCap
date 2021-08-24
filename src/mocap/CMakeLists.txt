cmake_minimum_required(VERSION 3.5)
project(mocap)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
#Find all the extra packages required

#Add the packages

#Include the headers for the NatNet client
include_directories(include/NatNet)
#Add the directory where the libraries are located
link_directories(${CMAKE_SOURCE_DIR}/lib)


#Create the executable
add_executable(mocap src/MoCap.cpp)

#Add all the used libraries to the project
target_link_libraries(mocap NatNet)#in the folder ./lib there must be a file libNatNet.so

install(TARGETS mocap
  DESTINATION lib/${PROJECT_NAME})


ament_package()
