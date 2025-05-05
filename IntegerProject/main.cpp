#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
	Integer a;
	Integer b(5);

	a.setNumber(7);

	Integer add = a.add(b);
	Integer sub = a.sub(b);
	Integer mult = a.mult(b);
	Integer div = a.div(b);

	cout << "A = " << a.getNumber() << endl;
	cout << "B = " << b.getNumber() << endl;
	cout << "Add: " << a.getNumber() << " + " << b.getNumber() << " = " << add.getNumber() << endl;
	cout << "Substract: " << a.getNumber() << " - " << b.getNumber() << " = " << sub.getNumber() << endl;
	cout << "Multiply: " << a.getNumber() << " * " << b.getNumber() << " = " << mult.getNumber() << endl;
	cout << "Divide: " << a.getNumber() << " / " << b.getNumber() << " = " << div.getNumber() << endl;

	return 0;
}