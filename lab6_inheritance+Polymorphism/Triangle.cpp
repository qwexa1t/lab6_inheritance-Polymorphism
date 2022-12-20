#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include <string>
#include "Triangle.h"
using namespace std;

Triangle::Triangle() //Конструктор без параметров
{
	side = 0;
	height = 0;
	color = " ";
}

Triangle::Triangle(int side, int height, string color) //Конструктор с параметрами
{
	this->side = side;
	this->height = height;
	this->color = color;
}

Triangle::~Triangle() //Деструктор
{
}

void Triangle::set()
{
	printf(" Введите сторону:");
	scanf("%d", &side);
	printf(" Введите Высоту:");
	scanf("%d", &height);
	printf(" Введите Цвет:");
	cin >> color;
}

float Triangle::area()
{
	return 0.5 * side * height;
}

void Triangle::print()
{
	cout << "\n Цвет: " << color << endl;
	printf("\n Сторона - %d", side);
	printf("\n Высота - %d", height);
	printf("\n Площадь - %.2f\n", area());
}


