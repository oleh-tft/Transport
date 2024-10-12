#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

class Transport
{
	string name;
	int maxPassengers;
	bool civilTransport;
	int maxSpeed;
	int currentSpeed;

public:
	Transport();
	Transport(string m, int max, bool civil, int ms);
	void Output()const;
	void Input();
	string GetName()const;
	void SetName(string m);
	int GetMaxPassengers()const;
	void SetMaxPassengers(int max);
	bool IsCivilTransport()const;
	void SetCivilTransport(bool civil);
	int GetMaxSpeed()const;
	void SetMaxSpeed(int ms);
	int GetCurrentSpeed()const;
	void SetCurrentSpeed(int cur);
	void Accelerate(int inc);
	void Decelerate(int dec);
};

