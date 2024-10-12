#include "Train.h"

Train::Train() : Ground()
{
	railroadCars = 0;
}

Train::Train(string m, int max, bool civil, int ms, int rc) : Ground(m, max, civil, ms)
{
	railroadCars = rc;
}

Train::Train(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY, int rc)
	: Ground(m, max, civil, ms, sX, sY, dX, dY)
{
	railroadCars = rc;
}

void Train::Output() const
{
	Ground::Output();
	cout << "Railroad cars amount: " << railroadCars << endl;
}

void Train::Input()
{
	Ground::Input();
	cout << "Railroad cars amount: ";
	cin >> railroadCars;
}

int Train::GetRailroadCars() const
{
	return railroadCars;
}

void Train::SetRailroadCars(int rc)
{
	railroadCars = rc;
}

void Train::Move()
{
	Ground::Move(GetDestinationX(), GetDestinationY());
}
