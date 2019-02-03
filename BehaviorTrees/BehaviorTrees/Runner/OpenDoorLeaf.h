#pragma once
#ifndef OPEN_DOOR_LEAF_H
#define OPEN_DOOR_LEAF_H

#include "LeafNode.h"

class OpenDoorLeaf : public BehaviorTrees::LeafNode
{
public:
	OpenDoorLeaf();
	~OpenDoorLeaf();

	void Action();
};
#endif // !OPEN_DOOR_LEAF_H

