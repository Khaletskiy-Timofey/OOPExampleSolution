#include "Student.h"

class Teacher
{
private:
	const int BEST_MARK = 9;

	int countBestStudents(Student* students, int size)
	{
		return 0;
	}

public:
	Student* getAllBestStudents(Student* students, int size, int& count)
	{
		count = countBestStudents(students, size);

		Student* best_students = new Student[count];
		int j = 0;

		for (int i = 0; i < size; i++)
		{
			if (students[i].avgMark >= BEST_MARK)
			{
				best_students[j++] = students[i];
			}
		}

		return best_students;
	}
};