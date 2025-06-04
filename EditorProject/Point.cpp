#include "Point.h"

double Point::calculateDistance() 
{
	return sqrt(x * x + y * y);
}

string Point::toString() 
{
	string info = "Type: Point";

	info += ", X: " + to_string(x);
	info += ", Y: " + to_string(y);

	return info;
}

Point Point::operator+(Point point)
{
	return Point(x + point.x, y + point.y);
}

Point Point::operator-(Point point)
{
	return Point(x - point.x, y - point.y);
}

Point Point::operator/(int value)
{
	return Point(x / value, y / value);
}

int Point::getX()
{
	return x;
}

void Point::setX(int x)
{
	this->x = x;
}

int Point::getY()
{
	return y;
}

void Point::setY(int y)
{
	this->y = y;
}