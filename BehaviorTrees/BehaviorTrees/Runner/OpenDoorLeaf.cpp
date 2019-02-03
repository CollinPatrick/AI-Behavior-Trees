#include "OpenDoorLeaf.h"
#include <iostream>


OpenDoorLeaf::OpenDoorLeaf()
{
}


OpenDoorLeaf::~OpenDoorLeaf()
{
}

void OpenDoorLeaf::Action()
{
	std::cout << "Openened door." << std::endl;
	status = SUCCESS;
}
