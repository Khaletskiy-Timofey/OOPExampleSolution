#include "Group.h"

Group::Group()
{
	count = 0;
	list = nullptr;
}

Group::Group(Student* list, int count)
{
	if (list != nullptr && count > 0)
	{
		list = new Student[count];

		this->count = count;

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
}

Group::~Group()
{
	if (list != nullptr && count > 0)
	{
		delete[] list;
	}
}

Student Group::getStrudnet(int index)
{
	if (index < 0 || index >= count)
	{
		return Student("", 0, 0, false);
	}

	return list[index];
}

int Group::getCount()
{
	return count;
}

//void Group::addStudent(Student student)
//{
//
//}
//
//void Group::removeStudent(Student student)
//{
//
//}
//
//void Group::removeStudent(int index)
//{
//
//}

void Group::setStudent(Student student1, Student student2)
{
	for (int i = 0; i < count; i++)
	{
		if (student1.getName() == list[i].getName()
			&& student1.getAge() == list[i].getAge()
			&& student1.getIsAlive() == list[i].getIsAlive())
		{
			list[i] = student2;
		}
	}
}

void Group::setStudent(int index, Student student)
{
	if (index < 0 || index >= count)
	{
		list[index] = student;
	}
}

string Group::toString()
{
	string groupString = "";

	for (int i = 0; i < count; i++)
	{
		groupString += list[i].toString() + "\n";
	}

	return groupString;
}