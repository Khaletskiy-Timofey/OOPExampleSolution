#pragma once

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point2D
{
private:
	int x;
	int y;

	double length();

public:
	Point2D() : x(0), y(0) {}
	Point2D(int x, int y) : x(x), y(y) {}

	int getX() const { return x; }
	void setX(int x) { this->x = x; }
	int getY() const { return y; }
	void setY(int y) { this->y = y; }

	/*Point2D add(Point2D point);
	Point2D add(int value);
	Point2D substract(Point2D point);
	Point2D substract(int value);
	Point2D minus();*/

	Point2D operator+(Point2D point);
	Point2D operator+(int value);
	Point2D operator-(Point2D point);
	Point2D operator-(int value);
	Point2D operator-();
	Point2D operator*(int value);
	Point2D operator/(int value);

	bool operator==(Point2D point);
	bool operator!=(Point2D point);
	bool operator>(Point2D point);
	bool operator<(Point2D point);
	bool operator>=(Point2D point);
	bool operator<=(Point2D point);

	string toString() const
	{
		return "X: " + to_string(x) + ", Y: " + to_string(y);
	}
};