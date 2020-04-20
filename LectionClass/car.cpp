#include "car.h"
#include <iostream>

using namespace std;
car::car()
{

}

car::car(string Name, string Color, int MaxSpeed, int Acceleration, string carType)
{
	
	this->Name = Name + "_" + to_string(Number++);
	this->Color = Color;
	this->MaxSpeed = MaxSpeed;
	this->Acceleration = Acceleration;
	this->CurrentSpeed = 0;
	this->isClacsonOn = false;
	this->carType = carType;
} 



void car::ShowSpeed(string addition )
{
	cout << " Скорость машины " << Name << ":" << CurrentSpeed << addition << endl;
}

car* car::getThisCar()
{
	this->carType = this->carType + "_car";
	return this;
}

string car::getType()
{
	return carType;
}

int car::currentSpeed()
{
	return CurrentSpeed + Acceleration;
}

void car::Accelerate()
{
	string addition;
	if (CurrentSpeed < MaxSpeed)
	{
		CurrentSpeed += Acceleration;
	}
	else
	{
		addition = " скорость максимальная";
	}
	ShowSpeed(addition);
}

void car::GetCurrentSpeed()
{
	ShowSpeed();
}

void car::ShowInfo(bool withEndl)
{
	cout << "Машина:" << Name  <<" типа:" <<carType << " цвета:" << Color ;
	if (withEndl)
	{
		cout << endl;
	}
}
