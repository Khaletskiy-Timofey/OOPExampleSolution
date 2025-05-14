#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	Queue q1;
	
	q1.Enqueue(0);
	q1.Enqueue(1);
	q1.Enqueue(2);

	cout << "Q1 before:\n\t" << q1.ToString() << endl;

	Queue q2;

	q2.Enqueue(q1.Dequeue());
	q2.Enqueue(q1.Peek());

	cout << "Q2 before:\n\t" << q2.ToString() << endl;

	Queue q3;

	q3.Enqueue(3);
	q3.Enqueue(2);
	q3.Enqueue(q1.Peek());
	q3.Enqueue(q2.Peek());

	cout << "Q3 before:\n\t" << q3.ToString() << endl;

	Queue q4;

	q4.Enqueue(q3.Dequeue());

	cout << "Q4 before:\n\t" << q4.ToString() << endl;

	q4.Dequeue();

	cout << "Q1 after:\n\t" << q1.ToString() << endl;
	cout << "Q2 after:\n\t" << q2.ToString() << endl;
	cout << "Q3 after:\n\t" << q3.ToString() << endl;
	cout << "Q4 after:\n\t" << q4.ToString() << endl;

	return 0;
}