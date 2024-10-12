#include "MotorShip.h"

MotorShip::MotorShip() : Aquatic()
{
	lifeboatAmount = 0;
}

MotorShip::MotorShip(string m, int max, bool civil, int ms, bool en, string nav, bool abr, int lifeb)
	: Aquatic(m, max, civil, ms, en, nav, abr)
{
	lifeboatAmount = lifeb;
}

void MotorShip::Output() const
{
	Aquatic::Output();
	cout << "Lifeboat amount: " << lifeboatAmount << endl;
}

void MotorShip::Input()
{
	Aquatic::Input();
	cout << "Lifeboat amount: ";
	cin >> lifeboatAmount;
}

int MotorShip::GetLifeboatAmount() const
{
	return lifeboatAmount;
}

void MotorShip::SetLifeboatAmount(int lifeb)
{
	lifeboatAmount = lifeb;
}

void MotorShip::DeployLifeboats(int amount)
{
	int toDeploy = amount > lifeboatAmount ? lifeboatAmount : amount;
	lifeboatAmount -= toDeploy;

	cout << "Deployed " << toDeploy << " lifeboats!" << endl;
}
