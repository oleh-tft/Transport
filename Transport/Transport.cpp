#include "Transport.h"

Transport::Transport()
{
	name = "";
	maxPassengers = 0;
	civilTransport = false;
	maxSpeed = 0;
	currentSpeed = 0;
}

Transport::Transport(string m, int max, bool civil, int ms)
{
	name = m;
	maxPassengers = max;
	civilTransport = civil;
	maxSpeed = ms;
	currentSpeed = 0;
}

void Transport::Output()const
{
	cout << boolalpha << "Name: " << name << "\tMax Passengers: " << maxPassengers 
		<<"\tIs civil transport: " << civilTransport << "\tMax Speed: " << maxSpeed 
		<<"\tCurrent speed: " << currentSpeed << endl;
}

void Transport::Input()
{
	cout << "Name: ";
	cin >> name;
	cout << "Max Passengers: ";
	cin >> maxPassengers;
	cout << "Is civil transport: ";
	cin >> civilTransport;
	cout << "Max Speed: ";
	cin >> maxSpeed;
}

string Transport::GetName()const
{
	return name;
}

void Transport::SetName(string m)
{
	name = m;
}

int Transport::GetMaxPassengers()const
{
	return maxPassengers;
}

void Transport::SetMaxPassengers(int max)
{
	maxPassengers = max;
}

bool Transport::IsCivilTransport()const
{
	return civilTransport;
}

void Transport::SetCivilTransport(bool civil)
{
	civilTransport = civil;
}

int Transport::GetMaxSpeed()const
{
	return maxSpeed;
}

void Transport::SetMaxSpeed(int ms)
{
	maxSpeed = ms;
}

int Transport::GetCurrentSpeed()const
{
	return currentSpeed;
}

void Transport::SetCurrentSpeed(int cur)
{
	currentSpeed = cur > maxSpeed ? maxSpeed : cur;
}

void Transport::Accelerate(int inc)
{
	currentSpeed += inc;
	if (currentSpeed > maxSpeed)
	{
		currentSpeed = maxSpeed;
	}
}

void Transport::Decelerate(int dec)
{
	currentSpeed -= dec;
	if (currentSpeed < 0)
	{
		currentSpeed = 0;
	}
}
