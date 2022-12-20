#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include <string>
#include "EquilateralTriangle.h"
using namespace std;

EquilateralTriangle::EquilateralTriangle() //Конструктор без параметров
{
	side = 0;
}

EquilateralTriangle::~EquilateralTriangle() //Деструктор
{
}

void EquilateralTriangle::set()
{
	printf(" Введите сторону:");
	scanf("%d", &side);
}

float EquilateralTriangle::area()
{
	return sqrt(3) / 4 * pow(side, 2);;
}

void EquilateralTriangle::print()
{
	printf("\n Сторона - %d", side);
	printf("\n Площадь - %.2f\n", area());
}
EquilateralTriangle& EquilateralTriangle::operator = (const EquilateralTriangle &equilateraltriangle)
{
	//Делаем копию
	side = equilateraltriangle.side;
	//Возвращаем существующий объект
	return *this;
}


