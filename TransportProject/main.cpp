#include <iostream>
#include "GasStation.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include "Airplane.h"

using namespace std;

int main()
{
	const int size = 4;

	Transport* tr1 = new Car(50);
	Transport* tr2 = new Truck(500);
	Transport* tr3 = new Bus(450);
	Transport* tr4 = new Airplane(9000);

	Transport* transports[size]{ tr1, tr2, tr3, tr4 };

	/*Car cars[size]{ Car(40), Car(50), Car(45) };
	Truck trucks[size]{ Truck(300), Truck(400), Truck(500) };
	Bus buses[size]{ Bus(255), Bus(250), Bus(300) };
	Airplane airplanes[size]{ Airplane(2000), Airplane(3000), Airplane(2860) };*/

	GasStation station;

	int total = station.calculateTotalGas(transports, size);

	cout << "Total gas: " << total << endl;

	return 0;
}