#pragma once
#ifndef I_CONSUMABLE_H
#define I_CONSUMABLE_H

class IConsumable
{
public:
	IConsumable() {};
	virtual ~IConsumable() {};

	virtual int Use() = 0;

private:

};

#endif // !I_CONSUMABLE_H
