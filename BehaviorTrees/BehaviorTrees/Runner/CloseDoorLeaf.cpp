#include "CloseDoorLeaf.h"

#include <iostream>

CloseDoorLeaf::CloseDoorLeaf()
{
}


CloseDoorLeaf::~CloseDoorLeaf()
{
}

void CloseDoorLeaf::Action()
{
	std::cout << "Closed door." << std::endl;
	status = SUCCESS;
}
