// Runner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Add to files using behavior tree
#include "BTLibrary.h"

int main()
{
	BehaviorTrees::BehaviorTree tree = BehaviorTrees::BehaviorTree();
	tree.root = new BehaviorTrees::Node();

    return 0;
}

