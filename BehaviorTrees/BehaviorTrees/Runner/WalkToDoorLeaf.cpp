#include "WalkToDoorLeaf.h"
#include <iostream>

WalkToDoorLeaf::WalkToDoorLeaf()
{
}


WalkToDoorLeaf::~WalkToDoorLeaf()
{
}

void WalkToDoorLeaf::Action() 
{
	std::cout << "Walked to door." << std::endl;
	status = SUCCESS;
}
