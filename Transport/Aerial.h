#pragma once
#include "Transport.h"
class Aerial : public Transport
{
	int enginesAmount;
	bool flying;
	int altitude;
	float fuelPercentage;

public:
	Aerial();
	Aerial(string m, int max, bool civil, int ms, int en, float fuel);
	void Output()const;
	void Input();
	int GetEnginesAmount()const;
	void SetEnginesAmount(int en);
	bool IsFlying()const;
	void SetFlying(bool fly);
	int GetAltitude()const;
	void SetAltitude(int alt);
	float GetFuelPercentage()const;
	void SetFuelPercentage(float fuel);
	void TakeOff(int speed);
	void Land();
};

