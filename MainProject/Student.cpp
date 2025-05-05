#include "Student.h"

string Student::getAllMarks()
{
	if (marksCount <= 0)
	{
		return "[]";
	}

	string marks_string = "";

	for (int i = 0; i < marksCount; i++)
	{
		marks_string += to_string(marks[i]) + ", ";
	}
	marks_string += "\b\b";

	return marks_string;
}

// Canonical constructor
Student::Student(string name, int age, int marksCount, bool isAlive)
{
	this->name = name;
	this->age = age;
	this->isAlive = isAlive;
	this->marksCount = marksCount;
	marks = new int[marksCount];
	for (int i = 0; i < marksCount; i++)
	{
		marks[i] = 4;
	}
}

Student::~Student()
{
	if (marks != nullptr)
	{
		delete[] marks;
	}
}

string Student::toString()
{
	string info = "";

	info += "Name: " + name;
	info += ", Age: " + to_string(age);
	info += ", Marks: " + getAllMarks();
	info += ", Is alive: ";
	info += (isAlive ? "Yes" : "No");

	return info;
}

string Student::getName()
{
	return name;
}

void Student::setName(string name)
{
	this->name = name;
}

int Student::getAge()
{
	return age;
}

void Student::setAge(int age)
{
	this->age = age;
}

int Student::getMark(int markIndex)
{
	return markIndex < 0 || markIndex >= marksCount ? 0 : marks[markIndex];
}

void Student::setMark(int markIndex, int mark)
{
	if (markIndex >= 0 || markIndex < marksCount)
	{
		marks[markIndex] = mark;
	}
}

int Student::getMarksCount()
{
	return marksCount;
}

bool Student::getIsAlive()
{
	return isAlive;
}

void Student::setIsAlive(bool isAlive)
{
	this->isAlive = isAlive;
}