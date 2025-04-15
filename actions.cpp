#include "actions.hpp"
#include <iostream>

BT::NodeStatus NavigateToRoom::tick() {
    std::cout << "Navigating to the room..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}

BT::NodeStatus OpenFridge::tick() {
    std::cout << "Opening the fridge..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}

BT::NodeStatus PickApple::tick() {
    std::cout << "Picking an apple..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}

BT::NodeStatus ExitRoom::tick() {
    std::cout << "Exiting the room..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}

