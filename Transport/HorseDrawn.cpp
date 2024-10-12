#include "HorseDrawn.h"

HorseDrawn::HorseDrawn() : Ground()
{
	animal = "";
	animalAmount = 0;
}

HorseDrawn::HorseDrawn(string m, int max, bool civil, int ms, string an, int am) : Ground(m, max, civil, ms)
{
	animal = an;
	animalAmount = am;
}

HorseDrawn::HorseDrawn(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY, string an, int am)
	: Ground(m, max, civil, ms, sX, sY, dX, dY)
{
	animal = an;
	animalAmount = am;
}

void HorseDrawn::Output() const
{
	Ground::Output();
	cout << "Animal: " << animal << "\tAmount: " << animalAmount << endl;
}

void HorseDrawn::Input()
{
	Ground::Input();
	cout << "Animal: ";
	cin >> animal;
	cout << "Animal amount: ";
	cin >> animalAmount;
}

string HorseDrawn::GetAnimal() const
{
	return animal;
}

void HorseDrawn::SetAnimal(string an)
{
	animal = an;
}

int HorseDrawn::GetAnimalAmount() const
{
	return animalAmount;
}

void HorseDrawn::SetAnimalAmount(int am)
{
	animalAmount = am;
}

void HorseDrawn::Move(double dX, double dY)
{
	if (animal.empty())
	{
		cout << "Invalid animal!" << endl;
		return;
	}
	if (animalAmount == 0)
	{
		cout << "You can't travel without any " << animal << endl;
		return;
	}
	Ground::Move(dX, dY);
}
