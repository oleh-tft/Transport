#pragma once
#include "Aerial.h"
class Helicopter : public Aerial
{
	bool hovering;

public:
	Helicopter();
	Helicopter(string m, int max, bool civil, int ms, int en, float fuel);
	void Output()const;
	void Input();
	bool IsHovering()const;
	void SetHovering(bool hover);
	void Land();
};

