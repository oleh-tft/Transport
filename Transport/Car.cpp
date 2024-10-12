#include "Car.h"

Car::Car() : Ground()
{
	color = "";
	plateNumber = "";
}

Car::Car(string m, int max, bool civil, int ms, string col, string pl) : Ground(m, max, civil, ms)
{
	color = col;
	plateNumber = pl;
}

Car::Car(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY, string col, string pl)
	: Ground(m, max, civil, ms, sX, sY, dX, dY)
{
	color = col;
	plateNumber = pl;
}

void Car::Output() const
{
	Ground::Output();
	cout << "Color: " << color << "\tPlate number: " << plateNumber << endl;
}

void Car::Input()
{
	Ground::Input();
	cout << "Color: ";
	cin >> color;
	cout << "Plate number: ";
	cin >> plateNumber;
}

string Car::GetColor() const
{
	return color;
}

void Car::SetColor(string col)
{
	color = col;
}

string Car::GetPlateNumber() const
{
	return plateNumber;
}

void Car::SetPlateNumber(string pl)
{
	plateNumber = pl;
}

void Car::Move(double dX, double dY)
{
	if (plateNumber.empty())
	{
		cout << "You can't travel without plate!" << endl;
		return;
	}
	Ground::Move(dX, dY);
}
