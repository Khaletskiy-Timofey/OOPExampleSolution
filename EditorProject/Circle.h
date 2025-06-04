#pragma once

#include "Line.h"
#include "Figure.h"

class Circle : public Figure
{
private:
	const int pi = 3;

	Point center;
	int radius;

public:
	Circle() : center(Point()), radius(0) {}
	Circle(Point center, int radius) : center(center), radius(radius) {}

	int calculatePerimeter() override;
	int calculateArea() override;
	double calculateDistance() override;

	string toString() override;

	Point getCenter();
	void setCenter(Point point);
	int getRadius();
	void setRadius(int radius);
};