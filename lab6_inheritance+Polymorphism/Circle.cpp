#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Circle.h"


Circle::Circle() //����������� ��� ����������
{
	radius = 1;
}

Circle::Circle(int radius) //����������� � �����������
{
	this->radius = radius;
}

Circle::~Circle() //����������
{
}

void Circle::set()
{
	printf(" ������� ������:");
	scanf("%d", &radius);
}

float Circle::area()
{
	return PI * radius * radius;
}

void Circle::print()
{
	printf("\n ������ - %d", radius);
	printf("\n ������� - %.2f\n", area());
}
