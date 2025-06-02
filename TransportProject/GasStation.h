#pragma once

#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include "Airplane.h"

class GasStation
{
public:
	int calculateTotalGas(Car* cars, Truck* trucks, Bus* buses, Airplane* airplanes, int size)
	{
		int total = 0;

		for (int i = 0; i < size; i++)
		{
			total += cars[i].volume;
		}
		
		for (int i = 0; i < size; i++)
		{
			total += trucks[i].tank;
		}
		
		for (int i = 0; i < size; i++)
		{
			total += buses[i].tank;
		}
		
		for (int i = 0; i < size; i++)
		{
			total += airplanes[i].tank;
		}
		
		return total;
	}
};