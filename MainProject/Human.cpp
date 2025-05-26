#include "Human.h"

Human::Human(string name, bool gender, int age)
{
	this->name = name;
	this->gender = gender;
	this->age = age;

	cout << "Human default constructor" << endl;
}

Human::~Human()
{
	cout << "Human destructor" << endl;
}

void Human::walk()
{

}

void Human::sit()
{

}

void Human::eat()
{

}

void Human::sleep()
{

}

string Human::getName()
{
	return name;
}

void Human::setName(string name)
{
	this->name = name;
}

bool Human::getGender()
{
	return gender;
}

void Human::setGender(bool gender)
{
	this->gender = gender;
}

int Human::getAge()
{
	return age;
}

void Human::setAge(int age)
{
	this->age = age;
}

string Human::toString()
{
	string human = "";

	human += "Name: " + name;
	human += ", Gender: ";
	human += gender ? "Male" : "Female";
	human += ", Name: " + to_string(age);

	return human;
}