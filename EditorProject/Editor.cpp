#include "Editor.h"

string Editor::getInformation(Figure** figures, int size)
{
	string info = "";

	for (int i = 0; i < size; i++)
	{
		info += figures[i]->toString() + "\n";
	}

	return info;
}

Figure* Editor::findNearestFigure(Figure** figures, int size)
{
	Figure* minDistanceFigure = figures[0];
	int minDistance = figures[0]->calculateDistance();

	for (int i = 1; i < size; i++)
	{
		int distance = figures[i]->calculateDistance();

		if (distance < minDistance)
		{
			minDistanceFigure = figures[i];
			minDistance = distance;
		}
	}

	return minDistanceFigure;
}

Figure* Editor::findFarrestFigure(Figure** figures, int size)
{
	Figure* maxDistanceFigure = figures[0];
	int maxDistance = figures[0]->calculateDistance();

	for (int i = 1; i < size; i++)
	{
		int distance = figures[i]->calculateDistance();

		if (distance > maxDistance)
		{
			maxDistanceFigure = figures[i];
			maxDistance = distance;
		}
	}

	return maxDistanceFigure;
}

Figure* Editor::findFigureWithMaxArea(Figure** figures, int size)
{
	Figure* maxAreaFigure = figures[0];
	int maxArea = figures[0]->calculateArea();

	for (int i = 1; i < size; i++)
	{
		int area = figures[i]->calculateArea();

		if (area > maxArea)
		{
			maxAreaFigure = figures[i];
			maxArea = area;
		}
	}

	return maxAreaFigure;
}

Figure* Editor::findFigureWithMaxPerimeter(Figure** figures, int size)
{
	Figure* maxPerimeterFigure = figures[0];
	int maxPerimeter = figures[0]->calculatePerimeter();

	for (int i = 1; i < size; i++)
	{
		int perimeter = figures[i]->calculatePerimeter();

		if (perimeter > maxPerimeter)
		{
			maxPerimeterFigure = figures[i];
			maxPerimeter = perimeter;
		}
	}

	return maxPerimeterFigure;
}

int Editor::sumArea(Figure** figures, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += figures[i]->calculateArea();
	}

	return sum;
}

int Editor::sumPerimeter(Figure** figures, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += figures[i]->calculatePerimeter();
	}

	return sum;
}