#include "Student.h"
#include "Worker.h"

class Manager : public Worker
{
public:
	Manager()
	{
		cout << "Manager default constructor" << endl;
	}

	~Manager()
	{
		cout << "Manager destructor" << endl;
	}

	/*Student* getBestStudents(Student* students, int studentsCount, int& bestStudentsCount);
	Student* getWorstStudents(Student* students, int studentsCount, int& worstStudentsCount);*/
};