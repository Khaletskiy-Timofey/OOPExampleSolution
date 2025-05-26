#include "Point2D.h"

//Point2D Point2D::add(Point2D point)
//{
//	return Point2D(x + point.getX(), y + point.getY());
//}
//
//Point2D Point2D::add(int value)
//{
//	return Point2D(x + value, y + value);
//}
//
//Point2D Point2D::substract(Point2D point)
//{
//	return Point2D(x - point.getX(), y - point.getY());
//}
//
//Point2D Point2D::substract(int value)
//{
//	return Point2D(x - value, y - value);
//}
//
//Point2D Point2D::minus()
//{
//	return Point2D(-x, -y);
//}

double Point2D::length()
{
	return sqrt(x * x + y * y);
}

Point2D Point2D::operator+(Point2D point)
{
	return Point2D(x + point.getX(), y + point.getY());
}

Point2D Point2D::operator+(int value)
{
	return Point2D(x + value, y + value);
}

Point2D Point2D::operator-(Point2D point)
{
	return Point2D(x - point.getX(), y - point.getY());
}

Point2D Point2D::operator-(int value)
{
	return Point2D(x - value, y - value);
}

Point2D Point2D::operator-()
{
	return Point2D(-x, -y);
}

Point2D Point2D::operator*(int value)
{
	return Point2D(x * value, y * value);
}

Point2D Point2D::operator/(int value)
{
	return Point2D(x / value, y / value);
}

bool Point2D::operator==(Point2D point)
{
	return x == point.getX() && y == point.getY();
}

bool Point2D::operator!=(Point2D point)
{
	return !(*this == point);
}

bool Point2D::operator>(Point2D point)
{
	return length() > point.length();
}

bool Point2D::operator<(Point2D point)
{
	return length() < point.length();
}

bool Point2D::operator>=(Point2D point)
{
	return !(*this < point);
}

bool Point2D::operator<=(Point2D point)
{
	return !(*this > point);
}