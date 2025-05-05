#pragma once

#include "Student.h"

class Initializer
{
public:
	void init(Student*& list, int count)
	{
		if (list == nullptr && count > 0)
		{
			list = new Student[count];
		}

		int namesCount = 16;
		string names[]{ "Ivan", "Alex", "Vlad" , "Matvey" , "Timur" , "Timofey" , "Nikita" , "Vladimir" , "Bogdan" , "Rodion", "Alexey", "Daniil", "Victor", "Kate", "Alice", "Maks" };

		int minMark = 0;
		int maxMark = 10;

		int minAge = 13;
		int maxAge = 18;

		for (int i = 0; i < count; i++)
		{
			list[i].getName() = names[getRandomNumber(0, namesCount - 1)];
			list[i].getAge() = getRandomNumber(minAge, maxAge);
			for (int j = 0; j < list[i].getMarksCount(); j++)
			{
				list[i].marks[j] = getRandomNumber(minMark, maxMark);
			}
		}
	}

	int getRandomNumber(int start, int end)
	{
		return rand() % (end - start + 1) + start;
	}
};