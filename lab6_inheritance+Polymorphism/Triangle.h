#pragma once
#include "Figure.h"
#include <string>
using namespace std;

class Triangle : public Figure
{
private:
	int side;
	int height;
	string color;

public:
	Triangle(); //Конструктор без параметров
	Triangle(int side, int height, string color);//Конструктор с параметрами
	~Triangle(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};









