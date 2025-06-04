#include "Circle.h"

int Circle::calculatePerimeter()
{
	return 2 * pi * radius;
}

int Circle::calculateArea()
{
	return pi * radius * radius;
}

double Circle::calculateDistance()
{
	return center.calculateDistance() - radius;
}

string Circle::toString()
{
	string info = "Type: Circle";

	info += ", Center X: " + to_string(center.getX());
	info += ", Y: " + to_string(center.getY());
	info += ", Radius: " + to_string(radius);

	return info;
}

Point Circle::getCenter()
{
	return center;
}

void Circle::setCenter(Point point)
{
	center = point;
}

int Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(int radius)
{
	this->radius = radius;
}