#include "SelectorNode.h"
using BehaviorTrees::SelectorNode;
#include <thread>

SelectorNode::SelectorNode()
{
}


SelectorNode::~SelectorNode()
{
}


void SelectorNode::Action()
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
	if (status != SUCCESS)
	{
		status = FAILED;
	}
}
