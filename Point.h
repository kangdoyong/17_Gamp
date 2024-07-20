#pragma once
#include <iostream>
using namespace std;

// 연산자 오버로딩
// 기존에 존재하던 연산자의 기본 기능 외에
// 다른 기능을 추가하는 것을 의미

class Point
{
private:
	int x, y;

public:
	Point();
	Point(int x, int y);

	void Print();

	// 산술 연산자 오버로드
	// +, -, *, /
	Point operator+(const Point& value);
	Point operator-(const Point& value);
	Point operator*(const Point& value);
	Point operator/(const Point& value);

	Point operator+(int value);
	Point operator-(int value);

	// 복합 대입 연산자 오버로드
	// +=, -=, *=, /=
	Point& operator+= (const Point& value);
	Point& operator-= (const Point& value);
	Point& operator*= (const Point& value);
	Point& operator/= (const Point& value);

	Point& operator+=(int value);
	Point& operator-=(int value);

	// 단항(증감) 연산자 오버로드
	// ++을 했을 때, 객체의 x,y 좌표를 1씩 증가
	// 연산 결과를 Point 타입으로 반환

	// 전위 연산자
	Point operator++();
	Point operator--();

	// 후위 연산자
	Point operator++(int);
	Point operator--(int);

	// 인덱스 연산자 오버로드
	enum Axis { X, Y };

	int operator[] (int index);
	int operator[] (Axis axis);
};

