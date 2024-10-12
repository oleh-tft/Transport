#include "Tanker.h"

Tanker::Tanker() : Aquatic()
{
	cargoAmount = 0;
	cargoChemical = false;
}

Tanker::Tanker(string m, int max, bool civil, int ms, bool en, string nav, bool abr, int ca, bool cc)
	: Aquatic(m, max, civil, ms, en, nav, abr)
{
	cargoAmount = ca;
	cargoChemical = cc;
}

void Tanker::Output() const
{
	Aquatic::Output();
	cout << "Cargo amount: " << cargoAmount << "\tIs cargo chemicals: " << cargoChemical << endl;
}

void Tanker::Input()
{
	Aquatic::Input();
	cout << "Cargo amount: ";
	cin >> cargoAmount;
	cout << "Cargo chemical: ";
	cin >> cargoChemical;
}

int Tanker::GetCargoAmount() const
{
	return cargoAmount;
}

void Tanker::SetCargoAmount(int ca)
{
	cargoAmount = ca;
}

bool Tanker::IsCargoChemical() const
{
	return cargoChemical;
}

void Tanker::SetCargoChemical(bool cc)
{
	cargoChemical = cc;
}
