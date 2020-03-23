#include "car.h"
#include <iostream>

using namespace std;

car::car(string Name, string Color, int MaxSpeed, int Acceleration)
{
	this->Name = Name;
	this->Color = Color;
	this->MaxSpeed = MaxSpeed;
	this->Acceleration = Acceleration;
	this->CurrentSpeed = 0;
	this->isClacsonOn = false;
}

car::~car()
{
	cout << Name << " ������ � �����" << endl;
}

void car::ShowSpeed(string addition = "")
{
	cout << " �������� ������ " << Name << ":" << CurrentSpeed << addition << endl;
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
		addition = " �������� ������������";
	}
	ShowSpeed(addition);
}

void car::GetCurrentSpeed()
{
	ShowSpeed();
}
