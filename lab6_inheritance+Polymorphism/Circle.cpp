#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Circle.h"


Circle::Circle() //Конструктор без параметров
{
	radius = 1;
}

Circle::Circle(int radius) //Конструктор с параметрами
{
	this->radius = radius;
}

Circle::~Circle() //Деструктор
{
}

void Circle::set()
{
	printf(" Введите Радиус:");
	scanf("%d", &radius);
}

float Circle::area()
{
	return PI * radius * radius;
}

void Circle::print()
{
	printf("\n Радиус - %d", radius);
	printf("\n Площадь - %.2f\n", area());
}
