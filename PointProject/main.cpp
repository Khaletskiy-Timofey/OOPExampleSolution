#include "Point2D.h"

int main()
{
	/*int a, b, c;

	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;
	c = a % b;
	++c;
	c++;
	c = -c;*/

	Point2D a(1, 1), b(2, 2);

	//cout << a.toString() << " + " << b.toString() << " = " << a.add(b).toString() << endl;
	cout << a.toString() << " + " << b.toString() << " = " << (a + b).toString() << endl;

	int value = 5;

	//cout << a.toString() << " + " << value << " = " << a.add(value).toString() << endl;
	cout << a.toString() << " + " << value << " = " << (a - value).toString() << endl;

	return 0;
}