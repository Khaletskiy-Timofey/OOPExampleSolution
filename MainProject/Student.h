#include "main.h"

class Student
{
private:
	string name;
	int age;
	int* marks;
	int marksCount;
	bool isAlive;

	string getAllMarks();

public:
	Student(string name, int age, int marksCount, bool isAlive);
	Student() : Student("No name", 13, 10, true) {}
	Student(string name, int age) : Student(name, age, 0, true) {}
	Student(const Student& student) : Student(student.name, student.age, student.marksCount, student.isAlive) {}

	~Student();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	int getMark(int markIndex);
	void setMark(int markIndex, int mark);
	int getMarksCount();
	bool getIsAlive();
	void setIsAlive(bool isAlive);

	string toString();
};