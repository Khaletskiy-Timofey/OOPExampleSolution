#include "Teacher.h"

int main()
{
	Student* students = nullptr;
	int size;

	cout << "Enter count of students: ";
	cin >> size;

	students = new Student[size];

	cout << "Enter data of students:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Student " << i + 1 << ":" << endl;

		cout << "\tName: ";
		cin >> students[i].name;

		cout << "\tAge: ";
		cin >> students[i].age;

		cout << "\tAverage mark: ";
		cin >> students[i].avgMark;

		cout << "\tIs alive (y/n): ";
		char answer;
		cin >> answer;

		students[i].isAlive = islower(answer) == 'y';
	}

	Teacher teacher;

	Student best_student = teacher.getAllBestStudents(students, size);

	string msg = best_student.isAlive ? "Best student is " + best_student.name : "No best students";

	cout << msg << endl;

	return 0;
}