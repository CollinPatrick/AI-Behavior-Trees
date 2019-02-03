#pragma once
#ifndef SEQUENCE_NODE_H
#define SEQUENCE_NODE_H
#include <list>
#include "Node.h"

namespace BehaviorTrees {
	class SequenceNode : public BehaviorTrees::Node
	{
	public:
		SequenceNode();
		~SequenceNode();
		void Action();
		std::list<Node*> branches;
	};
}
#endif

