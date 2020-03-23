#pragma once
#include <string>

using namespace std;

class car
{
public:
	car(string Name, string Color, int MaxSpeed, int Acceleration);
	~car();
	void Accelerate();
	void GetCurrentSpeed();
private:
	void ShowSpeed(string addition);
	string Color;
	string Name;
	int MaxSpeed;
	// Добавление к скорости
	int Acceleration;
	int CurrentSpeed;
	bool isClacsonOn;
};

