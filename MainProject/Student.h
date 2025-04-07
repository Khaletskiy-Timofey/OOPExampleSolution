#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	string name;
	int age;
	double avgMark;
	bool isAlive;

	string showStudentInfo()
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