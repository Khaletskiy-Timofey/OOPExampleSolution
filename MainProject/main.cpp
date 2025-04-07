#include "Student.h"

void change(Student student)
{
	student.name = "Vova";
	student.age = 16;
	student.avgMark = 10.0;
	student.isAlive = false;
}

int main()
{
	Student* st1 = new Student;

	st1->name = "Vlad";
	st1->age = 15;
	st1->avgMark = 9.9;
	st1->isAlive = true;

	Student* st2 = st1;

	cout << "Before:" << endl;
	cout << st1->showStudentInfo() << endl;

	st2->name = "Matvey";

	cout << "After:" << endl;
	cout << st1->showStudentInfo() << endl;

	return 0;
}