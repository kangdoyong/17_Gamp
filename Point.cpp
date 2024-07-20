#include "Point.h"

Point::Point()
	:x(0), y(0)
{
}

Point::Point(int x, int y)
	:x(x), y(y)
{
}

void Point::Print()
{
	cout << "(" << x << ", " << y << ")" << endl;
}

Point Point::operator+(const Point& value)
{
	return Point(x + value.x, y + value.y);
}

Point Point::operator-(const Point& value)
{
	return Point(x - value.x, y - value.y);
}

Point Point::operator*(const Point& value)
{
	return Point(x * value.x, y * value.y);
}

Point Point::operator/(const Point& value)
{
	return Point(x / value.x, y / value.y);
}

Point Point::operator+(int value)
{
	return Point(x + value, y + value);
}

Point Point::operator-(int value)
{
	return Point(x - value, y - value);
}

Point& Point::operator+=(const Point& value)
{
	// �ڱ� �ڽ��� ��ǥ�� �Ķ���ͷ� ���� ��ǥ�� ���ؼ�
	// ����� ��ȯ��
	// -> �� ��, �̹� Point���� + ���꿡 ���� �����ε带
	//	  �����Ͽ����Ƿ�, ���⼭ + ������ �����ε带 ����� �� ����
	return (*this = *this + value);
}

Point& Point::operator-=(const Point& value)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return (*this = *this - value);

}

Point& Point::operator*=(const Point& value)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return (*this = *this * value);

}

Point& Point::operator/=(const Point& value)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return (*this = *this / value);

}

Point& Point::operator+=(int value)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return (*this = *this + value);
}

Point& Point::operator-=(int value)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	return (*this = *this - value);

}

Point Point::operator++()
{
	// int�� �Ķ���͸� �޴� + ������ �����ε�
	// int�� �Ķ���͸� �޴� += ������ �����ε带
	// �ۼ��߱� ������ �Ʒ��� ���� �ۼ� ����

	return *this += 1;
}

Point Point::operator--()
{
	return *this -= 1;;

}

Point Point::operator++(int)
{
	Point tempPoint = *this;
	tempPoint += 1;
	*this = tempPoint;

	return tempPoint;
}

Point Point::operator--(int)
{
	Point tempPoint = *this;
	tempPoint -= 1;
	*this = tempPoint;

	return tempPoint;
}

int Point::operator[](int index)
{
	switch (index)
	{
	case 0: return x;
	case 1: return y;
	}
	return (index < 0) ? x : y;
}

int Point::operator[](Axis axis)
{ 
	switch (axis)
	{
	case Point::X:
		return x;
	case Point::Y:
		return y;
	}
	return x;
}
