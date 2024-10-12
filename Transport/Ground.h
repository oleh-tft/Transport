#pragma once
#include "Transport.h"
class Ground : public Transport
{
	double startX;
	double startY;
	double destinationX;
	double destinationY;

public:
	Ground();
	Ground(string m, int max, bool civil, int ms);
	Ground(string m, int max, bool civil, int ms, double sX, double sY, double dX, double dY);
	void Output()const;
	void Input();
	double GetStartX()const;
	void SetStartX(double dX);
	double GetStartY()const;
	void SetStartY(double dY);
	double GetDestinationX()const;
	void SetDestinationX(double dX);
	double GetDestinationY()const;
	void SetDestinationY(double dY);
	void Move(double dX, double dY);
	void Stop();
};

