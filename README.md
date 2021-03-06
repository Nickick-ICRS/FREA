# Friendly Robotic Emotional Assistant (FREA, pronounced "Freya")

This repo contains the code for my experimental robot FREA. This is a platform where I play around with HRI ideas that I have.

Dependencies etc. are listed in the individual package READMEs, but assuming you have ROS (Melodic) installed, you should be able to get the dependencies by running the following from the root of your catkin workspace (usually ~/catkin_ws):

`rosdep install --from-path src --ignore-src -r -y`

## Brief Package Overview

The following is a brief outline of each package - a more in depth description exists in the respective package README.

### frea_bringup

Main entry point. Primary launch file is frea.launch.

### frea_description

Xacro-ed up URDF files and STL files.

### frea_gazebo

Config and plugins for the Gazebo simulator.

### frea_msgs

Custom ROS msgs and srvs.

### frea_motion_control

Individual joint value control. cmd_vel to wheel vel conversion etc.

### frea_training_envs

Training environments and scripts for FREA using OpenAI ROS.
