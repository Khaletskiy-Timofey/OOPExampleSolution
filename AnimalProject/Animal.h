#pragma once

#include <iostream>

using namespace std;

class Animal
{
public:
	string name;

	Animal(string name) : name(name) {}

	virtual void getVoice()
	{
		cout << "..." << endl;
	}
};