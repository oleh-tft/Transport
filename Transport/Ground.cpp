#include <cmath>
#include "Ground.h"

Ground::Ground() : Transport()
{
	startX = 0.0;
	startY = 0.0;
	destinationX = 0.0;
	destinationY = 0.0;
}

Ground::Ground(string m, int max, bool civil, int ms) : Transport(m, max, civil, ms)
{
	startX = 0.0;
	startY = 0.0;
	destinationX = 0.0;
	destinationY = 0.0;
}

Ground::Ground(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY)
	: Transport(m, max, civil, ms)
{
	startX = sX;
	startY = sY;
	destinationX = dX;
	destinationY = dY;
}

void Ground::Output() const
{
	Transport::Output();
	cout << "Start X: " << startX << "\tStart Y: " << startY
		<< "\tDestination X: " << destinationX << "\tDestination Y: " << destinationY << endl;
}

void Ground::Input()
{
	Transport::Input();
	cout << "Start X: ";
	cin >> startX;
	cout << "Start Y: ";
	cin >> startY;
	cout << "Destination X: ";
	cin >> destinationX;
	cout << "Destination Y: ";
	cin >> destinationY;
}

double Ground::GetStartX() const
{
	return startX;
}

void Ground::SetStartX(double dX)
{
	startX = dX;
}

double Ground::GetStartY() const
{
	return startY;
}

void Ground::SetStartY(double dY)
{
	startY = dY;
}

double Ground::GetDestinationX() const
{
	return destinationX;
}

void Ground::SetDestinationX(double dX)
{
	destinationX = dX;
}

double Ground::GetDestinationY() const
{
	return destinationY;
}

void Ground::SetDestinationY(double dY)
{
	destinationY = dY;
}

void Ground::Move(double dX, double dY)
{
	if (GetCurrentSpeed() == 0) return;
	cout << "Moving!" << endl;

	double toTravel = fabs(startX - dX) + fabs(startY - dY);
	int timeToTravel = (toTravel * 1000 / GetCurrentSpeed()) * 10;

	cout << "To travel: " << toTravel << "\tTime to travel: " << timeToTravel / 1000 << " seconds" << endl;
	Sleep(timeToTravel);
	SetStartX(dX);
	SetStartY(dY);
	cout << "New coordinates: " << GetStartX() << ", " << GetStartY() << endl;

	if (GetStartX() == GetDestinationX() && GetStartY() == GetDestinationY())
	{
		Stop();
	}
}

void Ground::Stop()
{
	SetCurrentSpeed(0);
	cout << "Stopped!" << endl;
}
