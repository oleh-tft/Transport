#pragma once
#include "Aerial.h"
class Zeppelin : public Aerial
{
	string envelopeColor;

public:
	Zeppelin();
	Zeppelin(string m, int max, bool civil, int ms, int en, float fuel, string color);
	void Output()const;
	void Input();
	string GetEnvelopeColor()const;
	void SetEnvelopeColor(string color);

};

