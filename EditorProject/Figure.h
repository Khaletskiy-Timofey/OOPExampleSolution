#pragma once

#include "shape.h"

class Figure
{
public:
	virtual int calculatePerimeter() { return 0; }
	virtual int calculateArea() { return 0; }
	virtual double calculateDistance() = 0;

	virtual string toString() = 0;
};