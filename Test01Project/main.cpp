#include <iostream>
#include <string>

using namespace std;

void test(int*& array, int size)
{
	if (array == nullptr && size > 0)
	{
		array = new int[size] {};
	}

	for (int i = 0; i < size; i++)
	{
		array[i] = 1;
	}
}

string array_to_string(int* array, int size)
{
	string array_string = "";

	for (int i = 0; i < size; i++)
	{
		array_string += to_string(array[i]) + " ";
	}

	return array_string;
}

int main()
{
	int size = 10;
	int* array = nullptr;

	//cout << "Before: " << array_to_string(array, size) << endl;

	test(array, size);

	cout << "After: " << array_to_string(array, size) << endl;
	
	delete[] array;

	return 0;
}