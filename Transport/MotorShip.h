#pragma once
#include "Aquatic.h"
class MotorShip : public Aquatic
{
	int lifeboatAmount;

public:
	MotorShip();
	MotorShip(string m, int max, bool civil, int ms, bool en, string nav, bool abr, int lifeb);
	void Output()const;
	void Input();
	int GetLifeboatAmount()const;
	void SetLifeboatAmount(int lifeb);
	void DeployLifeboats(int amount);
};

