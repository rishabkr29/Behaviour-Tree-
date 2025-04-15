#pragma once
#include <behaviortree_cpp/bt_factory.h>

class NavigateToRoom : public BT::SyncActionNode {
public:
    NavigateToRoom(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}
    BT::NodeStatus tick() override;
    static BT::PortsList providedPorts() { return {}; }
};

class OpenFridge : public BT::SyncActionNode {
public:
    OpenFridge(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}
    BT::NodeStatus tick() override;
    static BT::PortsList providedPorts() { return {}; }
};

class PickApple : public BT::SyncActionNode {
public:
    PickApple(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}
    BT::NodeStatus tick() override;
    static BT::PortsList providedPorts() { return {}; }
};

class ExitRoom : public BT::SyncActionNode {
public:
    ExitRoom(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}
    BT::NodeStatus tick() override;
    static BT::PortsList providedPorts() { return {}; }
};
