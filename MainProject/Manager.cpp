//#include "Manager.h"
//
//Student* Manager::getBestStudents(Student* students, int studentsCount, int& bestStudentsCount)
//{
//	bestStudentsCount = 0;
//	int bestMark = 0;
//
//	for (int i = 0; i < studentsCount; i++)
//	{
//		for (int j = 0; j < students[i].getMarksCount(); j++)
//		{
//			int mark = students[i].getMark(j);
//
//			if (mark > bestMark)
//			{
//				bestMark = mark;
//				bestStudentsCount = 1;
//			}
//			else if (mark == bestMark)
//			{
//				bestStudentsCount++;
//			}
//		}
//	}
//
//	Student* bestStudents = new Student[bestStudentsCount];
//
//	for (int i = 0; i < studentsCount; i++)
//	{
//		
//	}
//
//	return bestStudents;
//}
//
//Student* Manager::getWorstStudents(Student* students, int studentsCount, int& worstStudentsCount)
//{
//
//}