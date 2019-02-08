#pragma once
#ifndef I_INTERACTABLE_H
#define I_INTERACTABLE_H

class IInteractable
{
public:
	IInteractable() {};
	virtual ~IInteractable() {};

	virtual int Interact() = 0;
	virtual int Break() = 0;
private:

};

#endif // !I_INTERACTABLE_H

