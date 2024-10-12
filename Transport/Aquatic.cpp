#include "Aquatic.h"

Aquatic::Aquatic()
{
	engineRequired = false;
	navigationSystem = "";
	canTravelAbroad = false;
}

Aquatic::Aquatic(string m, int max, bool civil, int ms, bool en, string nav, bool abr):Transport(m, max, civil, ms)
{
	engineRequired = en;
	navigationSystem = nav;
	canTravelAbroad = abr;
}

void Aquatic::Output() const
{
	Transport::Output();
	cout << "Engine required: " << engineRequired << "\tNavigation system: " << navigationSystem
		<< "\tCan travel abroad: " << canTravelAbroad << endl;
}

void Aquatic::Input()
{
	Transport::Input();
	cout << "Engine required: ";
	cin >> engineRequired;
	cout << "Navigation system: ";
	cin >> navigationSystem;
	cout << "Can travel abroad: ";
	cin >> canTravelAbroad;
}

bool Aquatic::IsEngineRequired() const
{
	return engineRequired;
}

void Aquatic::SetEngineRequired(bool en)
{
	engineRequired = en;
}

string Aquatic::GetNavigationSystem() const
{
	return navigationSystem;
}

void Aquatic::SetNavigationSystem(string nav)
{
	navigationSystem = nav;
}

bool Aquatic::GetCanTravelAbroad() const
{
	return canTravelAbroad;
}

void Aquatic::SetCanTravelAbroad(bool abr)
{
	canTravelAbroad = abr;
}

void Aquatic::Sail(int speed)
{
	SetCurrentSpeed(speed);
	cout << "Sailing!" << endl;
}

void Aquatic::Anchor()
{
	SetCurrentSpeed(0);
	cout << "Anchored!" << endl;
}
