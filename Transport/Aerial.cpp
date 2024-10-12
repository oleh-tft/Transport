#include "Aerial.h"

Aerial::Aerial() : Transport()
{
	enginesAmount = 0;
	flying = false;
	altitude = 0;
	fuelPercentage = 0.0f;
}

Aerial::Aerial(string m, int max, bool civil, int ms, int en, float fuel) : Transport(m, max, civil, ms)
{
	enginesAmount = en;
	flying = false;
	altitude = 0;
	fuelPercentage = fuel;
}

void Aerial::Output() const
{
	Transport::Output();
	cout << "Engines amount: " << enginesAmount << "\tFlying: " << flying
		<< "\tAltitude: " << altitude << "\tFuel: " << fuelPercentage * 100 << "%" << endl;
}

void Aerial::Input()
{
	Transport::Input();
	cout << "Engines amount: ";
	cin >> enginesAmount;
	cout << "Flying: ";
	cin >> flying;
	cout << "Altitude: ";
	cin >> altitude;
	cout << "Fuel: ";
	cin >> fuelPercentage;
}

int Aerial::GetEnginesAmount() const
{
	return enginesAmount;
}

void Aerial::SetEnginesAmount(int en)
{
	enginesAmount = en;
}

bool Aerial::IsFlying() const
{
	return flying;
}

void Aerial::SetFlying(bool fly)
{
	flying = fly;
}

int Aerial::GetAltitude() const
{
	return altitude;
}

void Aerial::SetAltitude(int alt)
{
	altitude = alt;
	if (altitude == 0)
	{
		SetFlying(false);
	}
	cout << "New altitude: " << altitude << endl;
	Sleep(1000);
}

float Aerial::GetFuelPercentage() const
{
	return fuelPercentage;
}

void Aerial::SetFuelPercentage(float fuel)
{
	fuelPercentage = fuel;
	if (fuelPercentage == 0.0f)
	{
		cout << "No fuel!" << endl;
		Sleep(3000);
		SetAltitude(0);
	}
}

void Aerial::TakeOff(int speed)
{
	SetCurrentSpeed(speed);
	SetFlying(true);
	cout << "Take off!" << endl;
}

void Aerial::Land()
{
	SetAltitude(0);
	cout << "Landed!" << endl;
}
