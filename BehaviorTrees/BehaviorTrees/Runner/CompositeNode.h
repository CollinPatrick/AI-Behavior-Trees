#pragma once
#ifndef COMPOSITE_NODE_H
#define COMPOSITE_NODE_H
#include <list>
#include "Node.h"

namespace BehaviorTrees {
	class CompositeNode : public BehaviorTrees::Node
	{
	public:
		CompositeNode();
		~CompositeNode();
		void Action();
		std::list<Node*> branches;
	};
}
#endif

