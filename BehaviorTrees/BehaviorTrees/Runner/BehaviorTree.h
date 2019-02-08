#pragma once
#ifndef BEHAVIOR_TREE_H
#define BEHAVIOR_TREE_H
#include "Node.h"

namespace BehaviorTrees {
	//Starting point of all behavior trees
	//If used as a node, Tree is used as an intermediate node and will redirect action to root
	class BehaviorTree : public Node	
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

