#pragma once
#ifndef KEY_H
#define KEY_H

#include "Door.h"
#include "IConsumable.h"

class Key : IConsumable
{
public:
	Key(Door* d);
	~Key();

	int Use();

private:
	Door* door;
};
#endif // !DOOR_H

