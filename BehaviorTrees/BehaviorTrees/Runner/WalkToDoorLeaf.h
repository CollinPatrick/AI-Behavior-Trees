#pragma once
#include "LeafNode.h"

class WalkToDoorLeaf : public BehaviorTrees::LeafNode
{
public:
	WalkToDoorLeaf();
	~WalkToDoorLeaf();
	void Action();
};

