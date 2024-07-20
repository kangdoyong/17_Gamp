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
	// 자기 자신의 좌표에 파라미터로 받은 좌표를 더해서
	// 결과를 반환함
	// -> 이 때, 이미 Point끼리 + 연산에 대한 오버로드를
	//	  정의하였으므로, 여기서 + 연산자 오버로드를 사용할 수 있음
	return (*this = *this + value);
}

Point& Point::operator-=(const Point& value)
{
	// TODO: 여기에 return 문을 삽입합니다.
	return (*this = *this - value);

}

Point& Point::operator*=(const Point& value)
{
	// TODO: 여기에 return 문을 삽입합니다.
	return (*this = *this * value);

}

Point& Point::operator/=(const Point& value)
{
	// TODO: 여기에 return 문을 삽입합니다.
	return (*this = *this / value);

}

Point& Point::operator+=(int value)
{
	// TODO: 여기에 return 문을 삽입합니다.
	return (*this = *this + value);
}

Point& Point::operator-=(int value)
{
	// TODO: 여기에 return 문을 삽입합니다.
	return (*this = *this - value);

}

Point Point::operator++()
{
	// int형 파라미터를 받는 + 연산자 오버로드
	// int형 파라미터를 받는 += 연산자 오버로드를
	// 작성했기 때문에 아래와 같이 작성 가능

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
