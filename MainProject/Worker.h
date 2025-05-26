#pragma once

#include "Human.h"

class Worker : public Human
{
public:
	double salary;
	string company;

	Worker() : Worker("No name", true, 20, 0, "No company") {}
	Worker(string name, bool gender, int age, double salary, string company);
	Worker(const Worker& worker);
	~Worker();

	double getSalary();
	void setSalary(double salary);
	string getCompany();
	void setCompany(string company);

	string toString();
};