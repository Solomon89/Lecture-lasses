#include <iostream>
#include <thread>
#include <chrono>
#include "car.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	car* ford = new car("ford mustang", "white", 300,50);
	car ferrari =  car("ferrari La ferrari", "red", 310, 52);

	for (int i = 0; i < 5; i++)
	{
		ford->Accelerate();
		ferrari.Accelerate();
		this_thread::sleep_for(chrono::milliseconds(800));
	}
	delete ford;
	cout << "Destructors" << endl;
	return 0;
}