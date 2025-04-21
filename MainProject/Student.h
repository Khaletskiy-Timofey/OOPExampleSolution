#include "main.h"

class Student
{
public:
	string name;
	int age;
	int* marks;
	int marksCount;
	bool isAlive;

	// Canonical constructor
	Student(string name, int age, int marksCount, bool isAlive)
	{
		this->name = name;
		this->age = age;
		this->isAlive = isAlive;
		this->marksCount = marksCount;
		this->marks = new int[marksCount];
		for (int i = 0; i < marksCount; i++)
		{
			this->marks[i] = 4;
		}
	}

	// Default constructor or constructor without arguments
	Student() : Student("No name", 13, 0, true)
	{
		marks = nullptr;
	}

	// Constructor with argument
	Student(string name, int age) : Student(name, age, 0, true)
	{
		marks = nullptr;
	}

	// Copy constructor
	Student(const Student& student) : Student(student.name, student.age, student.marksCount, student.isAlive)
	{
		
	}

	// Destructor
	~Student()
	{
		if (marks != nullptr)
		{
			delete[] marks;
		}
	}

	string toString()
	{
		string info = "";

		info += "Name: " + name;
		info += ", Age: " + to_string(age);
		info += ", Marks: " + getAllMarks();
		info += ", Is alive: ";
		info += (isAlive ? "Yes" : "No");

		return info;
	}

	string getAllMarks()
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

	int getMark(int markIndex)
	{
		return markIndex < 0 || markIndex >= marksCount ? 0 : marks[markIndex];
	}

	void setMark(int markIndex, int mark)
	{
		if (markIndex >= 0 || markIndex < marksCount)
		{
			marks[markIndex] = mark;
		}
	}
};