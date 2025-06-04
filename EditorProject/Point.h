#pragma once

#include "Figure.h"

class Point : public Figure
{
private:
	int x;
	int y;

public:
	Point() : x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}

	double calculateDistance() override;

	string toString() override;

	Point operator+(Point point);
	Point operator-(Point point);
	Point operator/(int value);

	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
};