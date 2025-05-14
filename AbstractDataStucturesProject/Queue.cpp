#include "Queue.h"

Queue::Queue()
{
	array = nullptr;
	size = 0;
}

Queue::~Queue()
{
	if (!IsEmpty())
	{
		delete[] array;
	}
}

void Queue::Enqueue(int value)
{
	if (!IsEmpty())
	{
		int* newArray = new int[size + 1];
		newArray[0] = value;

		for (int i = 0; i < size; i++)
		{
			newArray[i + 1] = array[i];
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

int Queue::Dequeue()
{
	int returnValue;

	if (!IsEmpty())
	{
		size--;
		int* newArray = new int[size];

		for (int i = 0; i < size; i++)
		{
			newArray[i] = array[i];
		}

		returnValue = array[size];

		delete[] array;

		array = newArray;
	}
	else
	{
		returnValue = 0;
	}

	return returnValue;
}

int Queue::Peek()
{
	return IsEmpty() ? 0 : array[size - 1];
}

int Queue::Length()
{
	return size;
}

bool Queue::IsEmpty()
{
	return Length() == 0;
}

void Queue::Clear()
{
	if (!IsEmpty())
	{
		delete[] array;

		array = nullptr;
		size = 0;
	}
}

string Queue::ToString()
{
	if (IsEmpty())
	{
		return "Queue is empty!";
	}

	string queueString = "Queue:";

	for (int i = 0; i < size; i++)
	{
		queueString += " " + to_string(array[i]);
	}

	queueString += ", Size = " + to_string(size);

	return queueString;
}