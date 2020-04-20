#pragma once
#include "car.h"
class Passenger : public car
{
public:
	int Seats;
	Passenger(string Name, string Color, int MaxSpeed, int Acceleration, int Seats);
	virtual void ShowInfo(bool withEndl = true) override;
	virtual void Brake(int varible = 20) override;
};

