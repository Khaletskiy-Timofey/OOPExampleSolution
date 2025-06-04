#include "Line.h"

int Line::calculatePerimeter()
{
	Point length = end - start;

	return sqrt(length.getX() * length.getX() + length.getY() * length.getY());
}

double Line::calculateDistance()
{
	int startPointDistance = start.calculateDistance();
	int endPointDistance = end.calculateDistance();

	return startPointDistance < endPointDistance ? startPointDistance : endPointDistance;
}

string Line::toString()
{
	string info = "Type: Line";

	info += ", Start X: " + to_string(start.getX());
	info += ", Y: " + to_string(start.getY());
	info += ", End X: " + to_string(end.getX());
	info += ", Y: " + to_string(end.getY());

	return info;
}

Point Line::getStartPoint()
{
	return start;
}

void Line::setStartPoint(Point point)
{
	start = point;
}

Point Line::getEndPoint()
{
	return end;
}

void Line::setEndPoint(Point point)
{
	end = point;
}