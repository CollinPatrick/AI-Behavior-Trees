#include "Door.h"
#include <iostream>

Door::Door(Vector3* p)
{
	pos = p;
}


Door::~Door()
{
}

void Door::Interact()
{
	if (isOpen) 
	{
		std::cout << "Closed Door" << std::endl;
	}
	else 
	{
		std::cout << "Opened Door" << std::endl;
	}

	isOpen = !isOpen;
}

Vector3* Door::position() 
{
	return pos;
}
