#include "AIController.h"
#include <thread>
#include <iostream>

#include "BTLibrary.h"
using BehaviorTrees::BehaviorTree; using BehaviorTrees::SequenceNode;

//Premade sub trees
#include "WalkThroughDoorTree.h"
using PreBuiltTrees::WalkThroughDoorTree;

BehaviorTree* tree_Main;

AIController::AIController()
{
	tree_Main = new BehaviorTree(); 
	{
		SequenceNode* sequenceOne = new SequenceNode();
		tree_Main->root = sequenceOne;
		{
			sequenceOne->branches.push_back(WalkThroughDoorTree(new Door()));
		}
	}
}


AIController::~AIController()
{
}

void AIController::RunAI()
{
	std::thread thread(&BehaviorTree::StartBehaviorTree, tree_Main);
	thread.join();
}
