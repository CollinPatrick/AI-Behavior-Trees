#include "BehaviorTree.h"

using BehaviorTrees::BehaviorTree;
using BehaviorTrees::Node;


BehaviorTree::BehaviorTree()
{
}


BehaviorTree::~BehaviorTree()
{
}

void BehaviorTree::StartBehaviorTree()
{
	root->Action();
}
