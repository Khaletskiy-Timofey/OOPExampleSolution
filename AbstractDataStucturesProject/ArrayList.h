#pragma once

#include <iostream>
#include <string>

using namespace std;

class ArrayList
{
private:
	int* array;
	int size;

public:
	ArrayList();
	~ArrayList();

	void Add(int value);
	void Add(int index, int value);
	void AddAll(int* values, int size);
	void AddAll(int index, int* values, int size);

	void Remove();
	void Remove(int index);

	int Get(int index);
	void Set(int index, int value);

	int GetLength();
	bool IsEmpty();
	void Clear();

	string ToString();
};