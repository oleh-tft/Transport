#include "Helicopter.h"

Helicopter::Helicopter() : Aerial()
{
	hovering = false;
}

Helicopter::Helicopter(string m, int max, bool civil, int ms, int en, float fuel):Aerial(m, max, civil, ms, en, fuel)
{
	hovering = false;
}

void Helicopter::Output() const
{
	Aerial::Output();
	cout << "Is hovering: " << hovering << endl;
}

void Helicopter::Input()
{
	Aerial::Input();
}

bool Helicopter::IsHovering() const
{
	return hovering;
}

void Helicopter::SetHovering(bool hover)
{
	hovering = hover;
	if (hovering)
	{
		SetCurrentSpeed(0);
		cout << "Helicopter is hovering!" << endl;
	}
}

void Helicopter::Land()
{
	SetHovering(false);
	Aerial::Land();
}
