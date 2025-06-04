#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Editor.h"

int main()
{
	Editor editor;

	const int size = 5;

	Figure** figures = new Figure*[size]{new Point(5, 10), new Line(Point(10, 12), Point(1, 8)), 
	new Circle(Point(-7, -8), 10), new Triangle(Point(0, 1), Point(-5, 2), Point(7, -9)), 
	new Rectangle(Point(-4, 5), 10, 8)};

	cout << "Info: " << editor.getInformation(figures, size) << endl;
	cout << "Nearest: " << editor.findNearestFigure(figures, size)->toString() << endl;
	cout << "Farrest: " << editor.findFarrestFigure(figures, size)->toString() << endl;
	cout << "Max area: " << editor.findFigureWithMaxArea(figures, size)->toString() << endl;
	cout << "Max perimeter: " << editor.findFigureWithMaxPerimeter(figures, size)->toString() << endl;
	cout << "Sum area: " << editor.sumArea(figures, size) << endl;
	cout << "Sum perimeter: " << editor.sumPerimeter(figures, size) << endl;

	return 0;
}