#pragma once
#include "Ground.h"
class Train : public Ground
{
	int railroadCars;

public:
	Train();
	Train(string m, int max, bool civil, int ms, int rc);
	Train(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY, int rc);
	void Output()const;
	void Input();
	int GetRailroadCars()const;
	void SetRailroadCars(int rc);
	void Move();
};

