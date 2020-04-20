#include "Rassing.h"
#include <iostream>
Rassing::Rassing(string Name, string Color, int MaxSpeed, int Acceleration, string Team):car(Name,  Color,  MaxSpeed,  Acceleration,"Rassing")
{
	this->Team = Team;
}

void Rassing::ShowInfo(bool withEndl)
{
	car::ShowInfo(false);
	cout << " Команда:"<< Team ;
	if (withEndl)
	{
		cout << endl;
	}
}

void Rassing::Brake(int varible)

{
	cout << "inner wheels start brake:" << endl;
	cout << "outer wheels start brake:" << endl;
	CurrentSpeed -= varible;
}

Rassing* Rassing::getThisCar()
{
	return this;
}
