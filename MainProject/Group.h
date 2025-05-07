#pragma once

#include "Student.h"

class Group
{
private:
	Student* list;
	int count;

public:
	Group();
	Group(Student* list, int count);
	~Group();

	Student getStrudnet(int index);
	int getCount();
	/*void addStudent(Student student);
	void removeStudent(Student student);
	void removeStudent(int index);*/
	void setStudent(Student student1, Student student2);
	void setStudent(int index, Student student);
	string toString();
};