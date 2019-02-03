#pragma once
#ifndef LEAF_NODE_H
#define LEAF_NODE_H
#include "Node.h"

//USED ONLY FOR QUICK IMPLIMENTAION OF ACTIONS THAT WONT BE REUSED
namespace BehaviorTrees {
	class LeafNode : public BehaviorTrees::Node
	{
	public:
		LeafNode();
		~LeafNode();

		void Action();
	};
}

#endif
/*
LeafNode* leaf2 = new LeafNode;
leaf2->Action = []()
{
	cout << "CUSTOM LEAF NODE TWO" << endl;
};
leaf2->Action();
*/

