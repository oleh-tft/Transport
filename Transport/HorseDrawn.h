#pragma once
#include "Ground.h"
class HorseDrawn : public Ground
{
	string animal;
	int animalAmount;

public:
	HorseDrawn();
	HorseDrawn(string m, int max, bool civil, int ms, string an, int am);
	HorseDrawn(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY, string an, int am);
	void Output()const;
	void Input();
	string GetAnimal()const;
	void SetAnimal(string an);
	int GetAnimalAmount()const;
	void SetAnimalAmount(int am);
	void Move(double dX, double dY);
};

