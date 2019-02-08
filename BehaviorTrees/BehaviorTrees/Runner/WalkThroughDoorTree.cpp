#include "WalkThroughDoorTree.h"

#include "BehaviorTree.h"
#include "SequenceNode.h"
#include "SelectorNode.h"
using BehaviorTrees::SequenceNode; using BehaviorTrees::BehaviorTree; using BehaviorTrees::SelectorNode;

#include "WalkToLeaf.h"
#include "InteractObjectLeaf.h"


BehaviorTree* PreBuiltTrees::WalkThroughDoorTree(Door* door)
{
	BehaviorTree* temp = new BehaviorTree();
	{//using extra {} for readability and visual nest hierarchy
		SequenceNode* interactDoor = new SequenceNode;
		temp->root = interactDoor;
		{
			interactDoor->branches.push_back(new WalkToLeaf(door->position()));

			SelectorNode* doorInteractions = new SelectorNode;
			interactDoor->branches.push_back(doorInteractions);
			{
				doorInteractions->branches.push_back(new InteractObjectLeaf(door));
				
				SequenceNode* unlockDoor = new SequenceNode;
				doorInteractions->branches.push_back(unlockDoor);
				{
					//Unlock Door
					//Open Door
				}
				//Break Door
			}
			interactDoor->branches.push_back(new WalkToLeaf(Vector3::Add(*door->position(), Vector3(1, 0, 0))));
			interactDoor->branches.push_back(new InteractObjectLeaf(door));
		}
	}
	return temp;
};