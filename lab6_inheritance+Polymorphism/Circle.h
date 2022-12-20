#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int radius;

public:
	Circle(); //Конструктор без параметров
	Circle(int radius);//Конструктор с параметрами
	~Circle(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};




