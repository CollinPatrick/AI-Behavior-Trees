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
			Door* door = new Door(new Vector3(20, 15, 5));
			Key* key = new Key (door);
			sequenceOne->branches.push_back(WalkThroughDoorTree(door, key));
		}
	}
}


AIController::~AIController()
{
	delete tree_Main;
}

void AIController::RunAI()
{
	std::thread thread(&BehaviorTree::StartBehaviorTree, tree_Main);
	thread.join();
}
