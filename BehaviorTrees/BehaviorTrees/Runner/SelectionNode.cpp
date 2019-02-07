#include "SelectionNode.h"
using BehaviorTrees::SelectionNode;
#include <thread>

SelectionNode::SelectionNode()
{
}


SelectionNode::~SelectionNode()
{
}


void SelectionNode::Action()
{
	status = RUNNING;

	for (Node* i : branches)
	{
		std::thread thread = std::thread(&Node::Action, i);
		thread.join();

		if (i->status == SUCCESS) 
		{
			status = SUCCESS; 
			break; 
		}
	}
	status = FAILED;
}
