#include "SequenceNode.h"
#include <thread>

using BehaviorTrees::SequenceNode;
using BehaviorTrees::Node;

SequenceNode::SequenceNode()
{
}


SequenceNode::~SequenceNode()
{
}

void SequenceNode::Action()
{
	status = RUNNING;

	for (Node* i : branches)
	{
		std::thread thread(&Node::Action, i);
		thread.join();

		if (i->status == FAILED)
		{ 
			status = FAILED; 
			break; 
		}
	}
	status = SUCCESS;
}


