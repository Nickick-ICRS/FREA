cmake_minimum_required(VERSION 3.0.2)
project(frea_training_envs)

SET(ROS_PYTHON_VERSION 3)

find_package(catkin REQUIRED COMPONENTS
  rospy
)

catkin_python_setup()

catkin_package(
  CATKIN_DEPENDS rospy
)
