#include <iostream>
#include "GasStation.h"

using namespace std;

int main()
{
	const int size = 3;

	Car cars[size]{ Car(40), Car(50), Car(45) };
	Truck trucks[size]{ Truck(300), Truck(400), Truck(500) };
	Bus buses[size]{ Bus(255), Bus(250), Bus(300) };
	Airplane airplanes[size]{ Airplane(2000), Airplane(3000), Airplane(2860) };

	GasStation station;

	int total = station.calculateTotalGas(cars, trucks, buses, airplanes, size);

	cout << "Total gas: " << total << endl;

	return 0;
}