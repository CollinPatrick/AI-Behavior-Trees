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
	interactable->Interact();
	status = SUCCESS;
}
