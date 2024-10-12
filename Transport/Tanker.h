#pragma once
#include "Aquatic.h"
class Tanker : public Aquatic
{
	int cargoAmount;
	bool cargoChemical;

public:
	Tanker();
	Tanker(string m, int max, bool civil, int ms, bool en, string nav, bool abr, int ca, bool cc);
	void Output()const;
	void Input();
	int GetCargoAmount()const;
	void SetCargoAmount(int ca);
	bool IsCargoChemical()const;
	void SetCargoChemical(bool cc);
};

