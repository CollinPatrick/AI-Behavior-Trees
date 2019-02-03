#include "WalkThroughDoorTree.h"

#include "BehaviorTree.h"
#include "SequenceNode.h"
using BehaviorTrees::SequenceNode; using BehaviorTrees::BehaviorTree;

#include "WalkToLeaf.h"
#include "InteractObjectLeaf.h"


BehaviorTree* PreBuiltTrees::WalkThroughDoorTree(Door* door)
{
	BehaviorTree* temp = new BehaviorTree();
	{
		SequenceNode *interactDoor = new SequenceNode;
		temp->root = interactDoor;
		{
			//CREATE OBJECT NODE TO GET INFO FROM
			interactDoor->branches.push_back(new WalkToLeaf(door->position()));
			interactDoor->branches.push_back(new InteractObjectLeaf(door));
			interactDoor->branches.push_back(new WalkToLeaf(Vector3::Add(*door->position(), Vector3(1, 0, 0))));
			interactDoor->branches.push_back(new InteractObjectLeaf(door));
		}
	}
	return temp;
};