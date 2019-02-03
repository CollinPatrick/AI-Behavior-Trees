#pragma once
#ifndef WALK_THROUGH_DOOR_H
#define WALK_THROUGH_DOOR_H

#include "LeafNode.h"

class WalkThroughDoorLeaf : public BehaviorTrees::LeafNode
{
public:
	WalkThroughDoorLeaf();
	~WalkThroughDoorLeaf();

	void Action();
};

#endif // !WALK_THROUGH_DOOR_H

