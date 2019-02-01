#pragma once
#ifndef COMPOSITE_NODE_H
#define COMPOSITE_NODE_H
#include "Node.h"

class CompositeNode : public BehaviorTrees::Node 
{
public:
	CompositeNode();
	~CompositeNode();
	void GetNode();
	void SetNode();
	void Action();
	int test = 50;
};
#endif

