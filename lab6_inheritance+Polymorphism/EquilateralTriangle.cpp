#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include <string>
#include "EquilateralTriangle.h"
using namespace std;

EquilateralTriangle::EquilateralTriangle() //����������� ��� ����������
{
	side = 0;
}

EquilateralTriangle::~EquilateralTriangle() //����������
{
}

void EquilateralTriangle::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
}

float EquilateralTriangle::area()
{
	return sqrt(3) / 4 * pow(side, 2);;
}

void EquilateralTriangle::print()
{
	printf("\n ������� - %d", side);
	printf("\n ������� - %.2f\n", area());
}
EquilateralTriangle& EquilateralTriangle::operator = (const EquilateralTriangle &equilateraltriangle)
{
	//������ �����
	side = equilateraltriangle.side;
	//���������� ������������ ������
	return *this;
}


