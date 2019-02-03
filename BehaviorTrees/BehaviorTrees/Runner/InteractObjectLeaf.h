#pragma once
#ifndef INTERACT_OBJECT_LEAF_H
#define INTERACT_OBJECT_LEAF_H

#include "LeafNode.h"
#include "IInteractable.h"

class InteractObjectLeaf : public BehaviorTrees::LeafNode
{
public:
	InteractObjectLeaf(IInteractable* i);
	~InteractObjectLeaf();

	void Action();

private:
	IInteractable * interactable;
};
#endif // !OPEN_DOOR_LEAF_H

