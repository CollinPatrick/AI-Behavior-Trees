#pragma once
#ifndef CLOSE_DOOR_LEAF_H
#define CLOSE_DOOR_LEAF_H

#include "LeafNode.h"

class CloseDoorLeaf : public BehaviorTrees::LeafNode 
{
public:
	CloseDoorLeaf();
	~CloseDoorLeaf();
	void Action();
};

#endif // !CLOSE_DOOR_LEAF_H

