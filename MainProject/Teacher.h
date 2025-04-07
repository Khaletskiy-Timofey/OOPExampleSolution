#include "Student.h"

class Teacher
{
	const int BEST_MARK = 9;

public:
	Student getAllBestStudents(Student* students, int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (students[i].avgMark >= BEST_MARK)
			{
				return students[i];
			}
		}

		Student empty{};

		return empty;
	}
};