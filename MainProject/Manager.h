#include "Student.h"

class Manager
{
public:
	Student* getBestStudents(Student* students, int studentsCount, int& bestStudentsCount);
	Student* getWorstStudents(Student* students, int studentsCount, int& worstStudentsCount);
};