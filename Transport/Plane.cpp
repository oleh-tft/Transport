#include "Plane.h"

Plane::Plane() : Aerial()
{
	cargoAmount = 0;
}

Plane::Plane(string m, int max, bool civil, int ms, int en, float fuel, int ca):Aerial(m, max, civil, ms, en, fuel)
{
	cargoAmount = ca;
}

void Plane::Output() const
{
	Aerial::Output();
	cout << "Cargo amount: " << cargoAmount << endl;
}

void Plane::Input()
{
	Aerial::Input();
	cout << "Cargo amount: ";
	cin >> cargoAmount;
}

int Plane::GetCargoAmount() const
{
	return cargoAmount;
}

void Plane::SetCargoAmount(int ca)
{
	cargoAmount = ca;
}
