#include "actions.hpp"
#include <behaviortree_cpp/bt_factory.h>

int main()
{
    BT::BehaviorTreeFactory factory;

    factory.registerNodeType<NavigateToRoom>("NavigateToRoom");
    factory.registerNodeType<OpenFridge>("OpenFridge");
    factory.registerNodeType<PickApple>("PickApple");
    factory.registerNodeType<ExitRoom>("ExitRoom");
   

    auto tree = factory.createTreeFromFile("../tree.xml");

    tree.rootNode()->executeTick();


    return 0;
}

