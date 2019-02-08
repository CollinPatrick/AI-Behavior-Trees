#pragma once
#ifndef SELECTION_NODE_H
#define SELECTION_NODE_H

#include<list>
#include "Node.h"

namespace BehaviorTrees {

	//Runs nodes in order until one returns success. If none returns success, Node returns Failed
	class SelectorNode : public Node
	{
	public:
		SelectorNode();
		~SelectorNode();

		void Action();

		std::list<Node*> branches;
	};
}

#endif // !SELECTION_NODE_H

