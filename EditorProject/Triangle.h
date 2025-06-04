#pragma once

#include "Line.h"
#include "Figure.h"

class Triangle : public Figure
{
private:
	Point p1;
	Point p2;
	Point p3;

public:
	Triangle() : p1(Point()), p2(Point()), p3(Point()) {}
	Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}

	int calculatePerimeter() override;
	int calculateArea() override;
	double calculateDistance() override;

	string toString() override;

	Point getP1();
	void setP1(Point point);
	Point getP2();
	void setP2(Point point);
	Point getP3();
	void setP3(Point point);
};