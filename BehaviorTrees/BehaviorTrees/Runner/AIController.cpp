#include "AIController.h"
#include <thread>
#include <iostream>
#include "BTLibrary.h"
using BehaviorTrees::SequenceNode; using BehaviorTrees::BehaviorTree; using BehaviorTrees::LeafNode;

//CustomNodes
#include "WalkToDoorLeaf.h"

BehaviorTree tree;

AIController::AIController()
{
	tree = BehaviorTree();
	{
		SequenceNode *node = new SequenceNode;
		{
			tree.root = node;

			WalkToDoorLeaf* walkToDoor = new WalkToDoorLeaf();
			node->branches.push_back(walkToDoor);
		}
	}
}


AIController::~AIController()
{
}

void AIController::RunAI()
{
	std::thread thread(&BehaviorTree::StartBehaviorTree, tree);
	thread.join();
}
