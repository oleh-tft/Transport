#include<iostream>
#include"Transport.h"
#include"Plane.h"
#include"Car.h"
#include"Train.h"
#include"HorseDrawn.h"
#include"MotorShip.h"
using namespace std;

int main()
{
	Plane aer("AN-225", 444, true, 850, 6, 0.6f, 9800);
	aer.Output();
	aer.TakeOff(100);
	aer.Accelerate(900);
	aer.SetAltitude(2300);
	aer.SetFuelPercentage(0.2f);
	aer.Output();
	aer.SetFuelPercentage(0.0f);
	aer.Output();

	cout << "============================" << endl;
		
	Car car("Audi RS7", 4, true, 330, 5.0, 2.0, 0.5, 10.0, "White", "");
	car.Accelerate(30);
	car.Move(0.5, 8.0);
	car.SetPlateNumber("KA 1234 KA");
	car.Move(0.5, 8.0);
	car.Move(3.7, 6.6);
	car.Move(0.1, 9.2);
	car.Move(0.5, 10.0);

	cout << "============================" << endl;

	Train train("rand", 200, false, 700, 7, 0.0, 0.0, 25.3, 13.4);
	train.Accelerate(220);
	train.Move();
	train.Accelerate(70);
	train.SetDestinationX(40.0);
	train.SetDestinationY(15.9);
	train.Move();
	train.Accelerate(90);
	train.SetDestinationX(30.0);
	train.SetDestinationY(8.0);
	train.Move();

	cout << "============================" << endl;

	MotorShip motorShip;
	motorShip.Input();
	motorShip.Output();
	motorShip.DeployLifeboats(8);

	return 0;
}