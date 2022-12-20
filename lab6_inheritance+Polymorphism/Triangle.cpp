#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include <string>
#include "Triangle.h"
using namespace std;

Triangle::Triangle() //����������� ��� ����������
{
	side = 0;
	height = 0;
	color = " ";
}

Triangle::Triangle(int side, int height, string color) //����������� � �����������
{
	this->side = side;
	this->height = height;
	this->color = color;
}

Triangle::~Triangle() //����������
{
}

void Triangle::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
	printf(" ������� ������:");
	scanf("%d", &height);
	printf(" ������� ����:");
	cin >> color;
}

float Triangle::area()
{
	return 0.5 * side * height;
}

void Triangle::print()
{
	cout << "\n ����: " << color << endl;
	printf("\n ������� - %d", side);
	printf("\n ������ - %d", height);
	printf("\n ������� - %.2f\n", area());
}


