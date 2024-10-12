#pragma once
#include "Aquatic.h"
class Boat : public Aquatic
{
	string material;

public:
	Boat();
	Boat(string m, int max, bool civil, int ms, bool en, string nav, bool abr, string mat);
	void Output()const;
	void Input();
	string GetMaterial()const;
	void SetMaterial(string mat);
};

