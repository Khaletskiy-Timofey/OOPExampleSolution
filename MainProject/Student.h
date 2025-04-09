#include "main.h"

class Student
{
public:
	string name;
	int age;
	double avgMark;
	bool isAlive;

	// Default constructor or constructor without arguments
	Student()
	{
		name = "No name";
		age = 13;
		avgMark = 4.0;
		isAlive = true;
	}

	// Constructor with argument
	Student(string input_name)
	{
		name = input_name;
		age = 13;
		avgMark = 4.0;
		isAlive = true;
	}

	// Canonical constructor
	Student(string input_name, int input_age, double input_avgMark, bool input_isAlive)
	{
		name = input_name;
		age = input_age;
		avgMark = input_avgMark;
		isAlive = input_isAlive;
	}

	// Copy constructor
	Student(const Student& student)
	{
		name = student.name;
		age = student.age;
		avgMark = student.avgMark;
		isAlive = student.isAlive;
	}

	// Destructor
	~Student()
	{
		cout << "Destructor" << endl;
	}

	string toString()
	{
		string info = "";

		info += "Name: " + name;
		info += ", Age: " + to_string(age);
		info += ", Average mark: " + to_string(avgMark);
		info += ", Is alive: ";
		info += (isAlive ? "Yes" : "No");

		return info;
	}
};