#include <iostream>
#include <thread>
#include <chrono>
#include "car.h"
#include "Rassing.h"
#include "Passenger.h"


using namespace std;

int car::Number = 1;

int main()
{
	setlocale(LC_ALL, "Rus");
	int const GarageLength = 3;
	car ** cars = new car*[GarageLength];
	cars[0] = new Rassing("װוננאנט LaFerrary", "Red", 300, 20, "װוננאנט");
	cars[1] = new Passenger("Ford Focus", "White", 200, 15, 4);
	cars[2] = new Passenger("Ford Focus","Black",200,15,2);
	for (int i = 0; i < GarageLength; i++)
	{
		
		cout << (*cars[i]->getThisCar()).getType() << endl;
		delete cars[i];
	}
	delete cars;
	return 0;
}