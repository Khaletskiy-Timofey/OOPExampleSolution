#pragma once

#include <iostream>
#include <string>

using namespace std;

class Queue
{
private:
	int* array;
	int size;

public:
	Queue();
	~Queue();

	void Enqueue(int value);
	int Dequeue();
	int Peek();

	int Length();
	bool IsEmpty();
	void Clear();

	string ToString();
};