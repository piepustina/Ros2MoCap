#!/bin/bash

#Build the package
colcon build --packages-select world_to_base

#Source the workspace 
. install/setup.bash

#Run the node
ros2 run world_to_base world_to_base
