#include "Integer.h"

Integer::Integer(int number)
{
	this->number = number;
}

Integer Integer::add(Integer in)
{
	Integer num;
	num.number = number + in.number;
	return num;
}

Integer Integer::sub(Integer in)
{
	Integer num;
	num.number = number - in.number;
	return num;
}

Integer Integer::mult(Integer in)
{
	Integer num;
	num.number = number * in.number;
	return num;
}

Integer Integer::div(Integer in)
{
	Integer num;
	num.number = number / in.number;
	return num;
}

Integer Integer::mod(Integer in)
{
	Integer num;
	num.number = number % in.number;
	return num;
}

int Integer::getNumber()
{
	return number;
}

void Integer::setNumber(int number)
{
	this->number = number;
}