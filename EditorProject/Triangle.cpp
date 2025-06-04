#include "Triangle.h"

int Triangle::calculatePerimeter()
{
	return Line(p1, p2).calculatePerimeter() 
		+ Line(p1, p3).calculatePerimeter() 
		+ Line(p2, p3).calculatePerimeter();
}

int Triangle::calculateArea()
{
	int halfPerimeter = calculatePerimeter() / 2;
	int length1 = Line(p1, p2).calculatePerimeter();
	int length2 = Line(p1, p3).calculatePerimeter();
	int length3 = Line(p2, p3).calculatePerimeter();

	return sqrt(halfPerimeter * (halfPerimeter - length1) 
		* (halfPerimeter - length2) * (halfPerimeter - length3));
}

double Triangle::calculateDistance()
{
	int p1Distance = p1.calculateDistance();
	int p2Distance = p2.calculateDistance();
	int p3Distance = p3.calculateDistance();

	return p1Distance < p2Distance && p1Distance < p3Distance ? p1Distance
		: p2Distance < p3Distance ? p2Distance : p3Distance;
}

string Triangle::toString()
{
	string info = "Type: Triangle";

	info += ", P1 X: " + to_string(p1.getX());
	info += ", Y: " + to_string(p1.getY());
	info += ", P2 X: " + to_string(p2.getX());
	info += ", Y: " + to_string(p2.getY());
	info += ", P3 X: " + to_string(p3.getX());
	info += ", Y: " + to_string(p3.getY());

	return info;
}

Point Triangle::getP1()
{
	return p1;
}

void Triangle::setP1(Point point)
{
	p1 = point;
}

Point Triangle::getP2()
{
	return p2;
}

void Triangle::setP2(Point point)
{
	p2 = point;
}

Point Triangle::getP3()
{
	return p3;
}

void Triangle::setP3(Point point)
{
	p3 = point;
}