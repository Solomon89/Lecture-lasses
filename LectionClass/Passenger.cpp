#include "Passenger.h"
#include "car.h"
#include <iostream>
Passenger::Passenger(string Name, string Color, int MaxSpeed, int Acceleration, int Seats) :car(Name, Color, MaxSpeed, Acceleration, "Passenger")
{
	this->Seats = Seats;
}
void Passenger::ShowInfo(bool withEndl)
{
	car::ShowInfo(false);
	cout << " Количество мест:" << Seats;
	if (withEndl)
	{
		cout << endl;
	}
}

void Passenger::Brake(int varible)
{
	cout << "front wheels start brake:" << endl;
	cout << "rearward wheels start brake:" << endl;
	CurrentSpeed -= varible;
}
