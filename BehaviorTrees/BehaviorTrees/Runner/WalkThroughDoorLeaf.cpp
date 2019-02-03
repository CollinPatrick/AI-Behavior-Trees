#include "WalkThroughDoorLeaf.h"

#include <iostream>

WalkThroughDoorLeaf::WalkThroughDoorLeaf()
{
}


WalkThroughDoorLeaf::~WalkThroughDoorLeaf()
{
}

void WalkThroughDoorLeaf::Action()
{
	std::cout << "Walked through door." << std::endl;
	status = SUCCESS;
}
