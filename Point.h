#pragma once
#include <iostream>
using namespace std;

// ������ �����ε�
// ������ �����ϴ� �������� �⺻ ��� �ܿ�
// �ٸ� ����� �߰��ϴ� ���� �ǹ�

class Point
{
private:
	int x, y;

public:
	Point();
	Point(int x, int y);

	void Print();

	// ��� ������ �����ε�
	// +, -, *, /
	Point operator+(const Point& value);
	Point operator-(const Point& value);
	Point operator*(const Point& value);
	Point operator/(const Point& value);

	Point operator+(int value);
	Point operator-(int value);

	// ���� ���� ������ �����ε�
	// +=, -=, *=, /=
	Point& operator+= (const Point& value);
	Point& operator-= (const Point& value);
	Point& operator*= (const Point& value);
	Point& operator/= (const Point& value);

	Point& operator+=(int value);
	Point& operator-=(int value);

	// ����(����) ������ �����ε�
	// ++�� ���� ��, ��ü�� x,y ��ǥ�� 1�� ����
	// ���� ����� Point Ÿ������ ��ȯ

	// ���� ������
	Point operator++();
	Point operator--();

	// ���� ������
	Point operator++(int);
	Point operator--(int);

	// �ε��� ������ �����ε�
	enum Axis { X, Y };

	int operator[] (int index);
	int operator[] (Axis axis);
};

