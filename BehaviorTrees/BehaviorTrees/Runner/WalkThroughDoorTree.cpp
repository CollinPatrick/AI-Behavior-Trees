#include "WalkThroughDoorTree.h"

#include "BehaviorTree.h"
#include "SequenceNode.h"
using BehaviorTrees::SequenceNode; using BehaviorTrees::BehaviorTree;

#include "WalkToLeaf.h"
#include "OpenDoorLeaf.h"
#include "WalkThroughDoorLeaf.h"
#include "CloseDoorLeaf.h"


BehaviorTree* PreBuiltTrees::WalkThroughDoorTree(Door* door)
{
	BehaviorTree* temp = new BehaviorTree();
	{
		SequenceNode *interactDoor = new SequenceNode;
		temp->root = interactDoor;
		{
			interactDoor->branches.push_back(new WalkToLeaf(new Vector3(1, 2, 3)));
			
			//NEEDS TO BE ABSTRACTED
			interactDoor->branches.push_back(new OpenDoorLeaf());
			interactDoor->branches.push_back(new WalkThroughDoorLeaf());
			interactDoor->branches.push_back(new CloseDoorLeaf());
		}
	}
	return temp;
};