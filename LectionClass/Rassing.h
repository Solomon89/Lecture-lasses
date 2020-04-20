#pragma once
#include "car.h"
class Rassing:public car
{
public:
	string Team;
	Rassing(string Name, string Color, int MaxSpeed, int Acceleration,string team);
	virtual void ShowInfo(bool withEndl = true);
	virtual void Brake(int varible = 50);
	virtual  Rassing* getThisCar() override;
};

