#include "Point.h"

void main()
{
	Point a(10, 20);

	Point b(30, 40);

	Point c = a + b;
	c.Print();

	c = a - b;
	c.Print();

	c = a * b;
	c.Print();

	c = a / b;
	c.Print();

	c = a + 10;
	c.Print();

	a += b;
	a.Print();

	a -= b;
	a.Print();

	a *= b;
	a.Print();

	a /= b;
	a.Print();

	a += 20;
	a.Print();
	
	cout<< "++ 연산" << endl;
	++a;
	a.Print();

	cout << "연산 ++" << endl;
	a++;
	a.Print();

	cout << "a.x " << a[0] << endl;
	cout << "a.y " << a[1] << endl;

	cout << "b.x " << b[Point::Axis::X] << endl;
	cout << "b.y " << b[Point::Axis::Y] << endl;
}