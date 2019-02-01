#include "BehaviorTree.h"
#include <iostream>
#include <thread>

using BehaviorTrees::BehaviorTree;
using BehaviorTrees::Node;

BehaviorTree::BehaviorTree()
{
}


BehaviorTree::~BehaviorTree()
{
}

void BehaviorTree::Action()
{
	root->Action();
}

void BehaviorTree::StartBehaviorTree()
{
	status = RUNNING;
	std::thread thread(&Node::Action, root);
	thread.join();
}
