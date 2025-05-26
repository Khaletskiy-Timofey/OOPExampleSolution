#include "Worker.h"

Worker::Worker(string name, bool gender, int age, double salary, string company) : Human(name, gender, age)
{
	this->salary = salary;
	this->company = company;

	cout << "Worker default constructor" << endl;
}

Worker::Worker(const Worker& worker) : Human(worker)
{
	this->salary = worker.salary;
	this->company = worker.company;
}

Worker::~Worker()
{
	cout << "Worker destructor" << endl;
}

double Worker::getSalary()
{
	return salary;
}

void Worker::setSalary(double salary)
{
	this->salary = salary;
}

string Worker::getCompany()
{
	return company;
}

void Worker::setCompany(string company)
{
	this->company = company;
}

string Worker::toString()
{
	string worker = "";

	worker += Human::toString();
	worker += ", Salary: " + to_string(salary);
	worker += ", Company: " + company;

	return worker;
}