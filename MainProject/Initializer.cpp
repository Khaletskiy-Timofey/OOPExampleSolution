//#include "Initializer.h"
//
//int Initializer::getRandomNumber(int start, int end)
//{
//	return rand() % (end - start + 1) + start;
//}
//
//void Initializer::init(Group group)
//{
//	/*if (group.getCount() == 0)
//	{
//		list = new Student[count];
//	}*/
//
//	int namesCount = 16;
//	string names[]{ "Ivan", "Alex", "Vlad" , "Matvey" , "Timur" , "Timofey" , "Nikita" , "Vladimir" , "Bogdan" , "Rodion", "Alexey", "Daniil", "Victor", "Kate", "Alice", "Maks" };
//
//	int minMark = 0;
//	int maxMark = 10;
//
//	int minAge = 13;
//	int maxAge = 18;
//
//	for (int i = 0; i < group.getCount(); i++)
//	{
//		group.setStudent(i, Student(names[getRandomNumber(0, namesCount - 1)], 
//			getRandomNumber(minAge, maxAge), list[i].getMarksCount(), true));
//	}
//}
