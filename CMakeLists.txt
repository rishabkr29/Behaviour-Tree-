cmake_minimum_required(VERSION 3.10)
project(bt_project)

set(CMAKE_CXX_STANDARD 17)

# Add BT.CPP library
add_subdirectory(BehaviorTree.CPP)

# Include headers
include_directories(BehaviorTree.CPP/include)

# Your executable
add_executable(bt_main main.cpp actions.cpp)

# Link against actual target name
target_link_libraries(bt_main BT::behaviortree_cpp)

add_library(bt_custom_nodes SHARED bt_plugins.cpp)
target_link_libraries(bt_custom_nodes PRIVATE behaviortree_cpp)

