#include "InteractObjectLeaf.h"
#include <iostream>


InteractObjectLeaf::InteractObjectLeaf(IInteractable* i)
{
	interactable = i;
}


InteractObjectLeaf::~InteractObjectLeaf()
{
}

void InteractObjectLeaf::Action()
{
	//int temp = interactable->Interact();
	status = static_cast<Status>(interactable->Interact());
}
