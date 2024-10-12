#pragma once
#include "Ground.h"
class Car : public Ground
{
	string color;
	string plateNumber;
	
public:
	Car();
	Car(string m, int max, bool civil, int ms, string col, string pl);
	Car(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY, string col, string pl);
	void Output()const;
	void Input();
	string GetColor()const;
	void SetColor(string col);
	string GetPlateNumber()const;
	void SetPlateNumber(string pl);
	void Move(double dX, double dY);
};

