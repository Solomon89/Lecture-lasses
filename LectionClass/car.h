#pragma once
#include <string>

using namespace std;

class car
{
public:
	static int  Number;
	
	car();
	car(string Name, string Color, int MaxSpeed, int Acceleration, string carType);
	
	void Accelerate();
	void GetCurrentSpeed();
	virtual void ShowInfo(bool withEndl = true);
	void ShowSpeed(string addition = "");
	virtual void Brake(int varible = 0) = 0;
	virtual car* getThisCar();
	string getType();
protected:
	
	string Color;
	string Name;
	int MaxSpeed;
	// Добавление к скорости
	int Acceleration;
	int CurrentSpeed;
	bool isClacsonOn;
private:
	int currentSpeed();
	string carType;
	
};

