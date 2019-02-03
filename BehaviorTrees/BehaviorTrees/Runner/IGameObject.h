#pragma once
#ifndef I_GAME_OBJECT_H
#define I_GAME_OBJECT_H

#include "Vector3.h"

class IGameObject
{
public:
	IGameObject() {};
	virtual ~IGameObject() {};

	virtual Vector3* position() = 0;

private:

};

#endif // !I_GAME_OBJECT_H

