#pragma once
#ifndef NODE_H
#define NODE_H

namespace BehaviorTrees{
	class Node
	{
	public:
		
		Node() {}
		virtual ~Node() {}

		enum Status
		{
			SUCCESS,
			RUNNING,
			FAILED
		};
		Status status;

		virtual void Action() = 0;
	};
}
#endif

