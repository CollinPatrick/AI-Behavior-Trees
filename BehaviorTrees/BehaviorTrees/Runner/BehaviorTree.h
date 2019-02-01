#pragma once
#ifndef BEHAVIOR_TREE_H
#define BEHAVIOR_TREE_H
#include "Node.h"

namespace BehaviorTrees {
	class BehaviorTree : public Node	//If used as a node, Tree is classified as a subtree
	{
	public:
		BehaviorTree();
		~BehaviorTree();

		void StartBehaviorTree();
		void Action();

		Node *root;
	};
}

#endif

