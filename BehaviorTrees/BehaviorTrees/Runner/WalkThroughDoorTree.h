#pragma once
#ifndef WALK_THROUGH_DOOR_TREE_H
#define WALK_THROUGH_DOOR_TREE_H

#include "BehaviorTree.h"
#include "Door.h"
#include "Key.h"

namespace PreBuiltTrees
{
	BehaviorTrees::BehaviorTree* WalkThroughDoorTree(Door* door, Key* key);
}

#endif // !WALK_THROUGH_DOOR_TREE_H

