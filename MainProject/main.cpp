#include "Teacher.h"

int main()
{
	Student student1;
	/*Student student2("Alex");
	Student student3("Vlad", 13, 10.0, true);
	Student student4(student3);*/

	Student student2{ "Alex" };
	Student student3{ "Vlad", 13, 10.0, true };
	Student student4{ student3 };

	cout << student1.toString() << endl;
	cout << student2.toString() << endl;
	cout << student3.toString() << endl;
	cout << student4.toString() << endl;

	return 0;
}