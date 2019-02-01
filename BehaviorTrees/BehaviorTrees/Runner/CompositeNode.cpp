#include "CompositeNode.h"
#include <iostream> //Temporary
#include <thread>

using BehaviorTrees::CompositeNode;
using BehaviorTrees::Node;

CompositeNode::CompositeNode()
{

}


CompositeNode::~CompositeNode()
{
}

void CompositeNode::Action()
{
	status = RUNNING;

	for (Node* i : branches)
	{
		std::thread thread(&Node::Action, i);
		thread.join();
	}
	std::cout << "TEST" << std::endl;
}


