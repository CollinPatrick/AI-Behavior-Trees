#include "SequenceNode.h"
#include <iostream> //Temp

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
		i->Action();
		while (i->status == RUNNING) {}
		if (i->status = FAILED) { break; } //ADD CATCH TO FAILED ACTION

		//threads.push_back(new std::thread(&Node::Action, i));
		//thread.join();
	}
	std::cout << "TEST" << std::endl;
}


