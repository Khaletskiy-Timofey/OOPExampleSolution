#pragma once

#include "Line.h"
#include "Figure.h"

class Rectangle : public Figure
{
private:
	Point p;
	int width;
	int height;

public:
	Rectangle() : p(Point()), width(0), height(0) {}
	Rectangle(Point p, int width, int height) : p(p), width(width), height(height) {}

	int calculatePerimeter() override;
	int calculateArea() override;
	double calculateDistance() override;

	string toString() override;

	Point getP();
	void setP(Point point);
	int getWidth();
	void SetWidth(int width);
	int getHeight();
	void setHeight(int height);
};