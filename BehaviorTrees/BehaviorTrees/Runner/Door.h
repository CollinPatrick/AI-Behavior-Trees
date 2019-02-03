#pragma once
#ifndef DOOR_H
#define DOOR_H

#include "IInteractable.h"
#include "IGameObject.h"

class Door : public IInteractable, public IGameObject
{
public:
	Door() {};
	Door(Vector3* p);
	~Door();

	void Interact();
	Vector3* position();

private:
	bool isOpen = false;
	Vector3* pos;
};

#endif // !DOOR_H

