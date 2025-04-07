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
	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.avgMark = 9.5;
	st1.isAlive = true;

	temp = st1;

	cout << "Before:" << endl;
	cout << st1.showStudentInfo() << endl;
	cout << temp.showStudentInfo() << endl;

	//change(st1);
	st1.name = "Vova";

	cout << "After:" << endl;
	cout << st1.showStudentInfo() << endl;
	cout << temp.showStudentInfo() << endl;

	return 0;
}