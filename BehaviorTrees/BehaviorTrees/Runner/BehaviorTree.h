#pragma once
using BehaviorTrees::Node;

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

