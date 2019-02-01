#pragma once
#ifndef BEHAVIOR_TREE_H
#define BEHAVIOR_TREE_H
#include "Node.h"

namespace BehaviorTrees {
	class BehaviorTree
	{
	public:
		BehaviorTree();
		~BehaviorTree();

		void StartBehaviorTree();

		Node *root;
	};
}

#endif

