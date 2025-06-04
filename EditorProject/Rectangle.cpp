#include "Rectangle.h"

int Rectangle::calculatePerimeter()
{
	Point p2 = Point(p.getX() + width, p.getY());
	Point p3 = Point(p.getX() + width, p.getY() - height);
	Point p4 = Point(p.getX(), p.getY() - height);

	return Line(p, p2).calculatePerimeter()
		+ Line(p2, p3).calculatePerimeter()
		+ Line(p, p4).calculatePerimeter() 
		+ Line(p4, p3).calculatePerimeter();
}

int Rectangle::calculateArea()
{
	return width * height;
}

double Rectangle::calculateDistance()
{
	Point p2 = Point(p.getX() + width, p.getY());
	Point p3 = Point(p.getX() + width, p.getY() - height);
	Point p4 = Point(p.getX(), p.getY() - height);

	int p1Distance = p.calculateDistance();
	int p2Distance = p2.calculateDistance();
	int p3Distance = p3.calculateDistance();
	int p4Distance = p3.calculateDistance();

	int distance = p4Distance;

	if (p1Distance < p2Distance && p1Distance < p3Distance && p1Distance < p4Distance)
	{
		distance = p1Distance;
	}
	else if (p2Distance < p3Distance && p2Distance < p4Distance)
	{
		distance = p2Distance;
	}
	else if (p3Distance < p4Distance)
	{
		distance = p3Distance;
	}

	return distance;
}

string Rectangle::toString()
{
	string info = "Type: Rectangle";

	info += ", P X: " + to_string(p.getX());
	info += ", Y: " + to_string(p.getY());
	info += ", Width: " + to_string(width);
	info += ", Height: " + to_string(height);

	return info;
}

Point Rectangle::getP()
{
	return p;
}

void Rectangle::setP(Point point)
{
	p = point;
}

int Rectangle::getWidth()
{
	return width;
}

void Rectangle::SetWidth(int width)
{
	this->width = width;
}

int Rectangle::getHeight()
{
	return height;
}

void Rectangle::setHeight(int height)
{
	this->height = height;
}