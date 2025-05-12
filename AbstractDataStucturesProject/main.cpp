#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
	ArrayList ar1;

	ar1.Add(1);
	ar1.Add(0, 2);

	ArrayList ar2;
	int* array = new int[3]{ 0, 1, 2 };

	ar2.AddAll(array, 3);
	ar2.Remove();

	ArrayList ar3;

	ar2.Add(4);
	ar2.AddAll(0, array, 3);

	return 0;
}