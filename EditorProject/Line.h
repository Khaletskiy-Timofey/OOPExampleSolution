#pragma once

#include "Point.h"
#include "Figure.h"

class Line : public Figure
{
private:
	Point start;
	Point end;

public:
	Line() : start(Point()), end(Point()) {}
	Line(Point start, Point end) : start(start), end(end) {}

	int calculatePerimeter() override;
	double calculateDistance() override;

	string toString() override;

	Point getStartPoint();
	void setStartPoint(Point point);
	Point getEndPoint();
	void setEndPoint(Point point);
};