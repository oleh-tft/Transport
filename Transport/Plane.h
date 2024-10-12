#pragma once
#include "Aerial.h"
class Plane : public Aerial
{
	int cargoAmount;

public:
	Plane();
	Plane(string m, int max, bool civil, int ms, int en, float fuel, int ca);
	void Output()const;
	void Input();
	int GetCargoAmount()const;
	void SetCargoAmount(int ca);
};

