#include "WalkToLeaf.h"
#include <iostream>

WalkToLeaf::WalkToLeaf(Vector3* pos)
{
	movePosition = pos;
}


WalkToLeaf::~WalkToLeaf()
{
}

void WalkToLeaf::Action()
{
	std::cout << "Walked to " << movePosition->print() << std::endl;
	status = SUCCESS;
}
