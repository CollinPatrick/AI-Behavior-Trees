#pragma once
#ifndef WALK_TO_LEAF_H
#define WALK_TO_LEAF_H

#include "LeafNode.h"
#include "Vector3.h"

//namespace CustomLeafs {
	class WalkToLeaf : public BehaviorTrees::LeafNode
	{
	public:
		WalkToLeaf(Vector3* pos);
		~WalkToLeaf();
		void Action();

	private:
		Vector3 * movePosition;
	};
//}
#endif // !WALK_TO_DOOR_H
