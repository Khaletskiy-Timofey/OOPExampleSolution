#pragma once

#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string name;
	bool gender;
	int age;

public:
	Human() : Human("No name", true, 20) {}
	Human(string name, bool gender, int age);
	Human(const Human& human) : Human(human.name, human.gender, human.age) {}
	~Human();

	void walk();
	void sit();
	void eat();
	void sleep();

	string getName();
	void setName(string name);
	bool getGender();
	void setGender(bool gender);
	int getAge();
	void setAge(int age);

	string toString();
};