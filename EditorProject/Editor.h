#pragma once

#include "Figure.h"

class Editor
{
private:

public:
	string getInformation(Figure** figures, int size);
	Figure* findNearestFigure(Figure** figures, int size);
	Figure* findFarrestFigure(Figure** figures, int size);
	Figure* findFigureWithMaxArea(Figure** figures, int size);
	Figure* findFigureWithMaxPerimeter(Figure** figures, int size);
	int sumArea(Figure** figures, int size);
	int sumPerimeter(Figure** figures, int size);
};