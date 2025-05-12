#include "ArrayList.h"

ArrayList::ArrayList()
{
	array = nullptr;
	size = 0;
}

ArrayList::~ArrayList()
{
	if (array != nullptr)
	{
		delete[] array;
	}
}

void ArrayList::Add(int value)
{
	if (array != nullptr)
	{
		int* newArray = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			newArray[i] = array[i];
		}

		delete[] array;

		array = newArray;
		size++;
	}
	else
	{
		array = new int[1];
		array[0] = value;
		size = 1;
	}
}

void ArrayList::Add(int index, int value)
{
	if (index < 0 || index >= size || array == nullptr)
	{
		return;
	}

	size++;
	int* newArray = new int[size];

	for (int i = 0, j = 0; i < size; i++)
	{
		if (i != index)
		{
			newArray[i] = array[j++];
		}
		else
		{
			newArray[i] = value;
		}
	}

	delete[] array;
	array = newArray;
}

void ArrayList::AddAll(int* values, int size)
{
	if (values == nullptr || size <= 0)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		Add(values[i]);
	}

	this->size += size;
}

void ArrayList::AddAll(int index, int* values, int size)
{
	if (values == nullptr || size <= 0 || index < 0 || index >= size)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		Add(index + i, values[i]);
	}

	this->size += size;
}

void ArrayList::Remove()
{
	if (array == nullptr)
	{
		return;
	}

	size--;

	int* newArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArray[i] = array[i];
	}

	delete[] array;

	array = newArray;
}

void ArrayList::Remove(int index)
{
	if (array == nullptr || index < 0 || index >= size)
	{
		return;
	}

	int* newArray = new int[size - 1];

	for (int i = 0, j = 0; i < size; i++)
	{		
		if (i != index)
		{
			newArray[j++] = array[i];
		}
	}

	delete[] array;

	array = newArray;
	size--;
}

int ArrayList::Get(int index)
{
	if (array == nullptr || index < 0 || index >= size)
	{
		return 0;
	}

	return array[index];
}

void ArrayList::Set(int index, int value)
{
	if (array == nullptr || index < 0 || index >= size)
	{
		return;
	}

	array[index] = value;
}

int ArrayList::GetLength()
{
	return size;
}

bool ArrayList::IsEmpty()
{
	return GetLength() == 0;
}

void ArrayList::Clear()
{
	if (array != nullptr)
	{
		delete[] array;

		array = nullptr;
		size = 0;
	}
}

string ArrayList::ToString()
{
	if (array == nullptr)
	{
		return "List is empty!";
	}

	string result = "Array:";

	for (int i = 0; i < size; i++)
	{
		result += " " + to_string(array[i]);
	}

	result += ", Size = " + to_string(size);

	return result;
}