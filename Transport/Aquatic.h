#pragma once
#include "Transport.h"
class Aquatic : public Transport
{
	bool engineRequired;
	string navigationSystem;
	bool canTravelAbroad;

public:
	Aquatic();
	Aquatic(string m, int max, bool civil, int ms, bool en, string nav, bool abr);
	void Output()const;
	void Input();
	bool IsEngineRequired()const;
	void SetEngineRequired(bool en);
	string GetNavigationSystem()const;
	void SetNavigationSystem(string nav);
	bool GetCanTravelAbroad()const;
	void SetCanTravelAbroad(bool abr);
	void Sail(int speed);
	void Anchor();
		
};

