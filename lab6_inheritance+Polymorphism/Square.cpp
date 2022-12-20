#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"
using namespace std;

int Square::Count = 0;

Square::Square() //����������� ��� ����������
{
	side = 4;
	Count++;
}

Square::Square(int side) //����������� � �����������
{
	this->side = side;
}

Square::~Square() //����������
{
}

void Square::set()
{
	printf(" ������� �������:");
	cin >> side;
	try
	{
		if (side < 0) throw "Negative number.";
		if (side > 100) throw "Large number. Maximum value 100";
		if (!cin) throw "Not integer number.";
	}
	catch (const char* e)
	{
		printf("\n Error: %s\n\n", e);
		exit(1);
	}

}

float Square::area()
{
	return side * side;
}

void Square::print()
{
	printf("\n ������� - %d", side);
	printf("\n ������� - %.0f\n", area());
}

