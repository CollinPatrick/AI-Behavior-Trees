#include "Door.h"
#include <iostream>

Door::Door(Vector3* p)
{
	pos = p;
}


Door::~Door()
{
}

int Door::Interact()
{
	if (!isBroken) {
		if (!isLocked) {
			if (isOpen)
			{
				std::cout << "Closed Door" << std::endl;
			}
			else
			{
				std::cout << "Opened Door" << std::endl;
			}
			isOpen = !isOpen;
			return 0; //Success
		}
		else
		{
			std::cout << "Door is Locked" << std::endl;
			return 2; //Fail
		}
	}
	else
	{
		std::cout << "Door is Broken" << std::endl;
		return 0;	//Success
	}
}

int Door::Break()
{
	return 0;
}

Vector3* Door::position() 
{
	return pos;
}
