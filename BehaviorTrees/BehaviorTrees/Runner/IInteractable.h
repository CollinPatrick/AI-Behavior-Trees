#pragma once
#ifndef I_INTERACTABLE_H
#define I_INTERACTABLE_H

class IInteractable
{
public:
	IInteractable() {};
	virtual ~IInteractable() {};

	virtual void Interact() = 0;
private:

};

#endif // !I_INTERACTABLE_H

