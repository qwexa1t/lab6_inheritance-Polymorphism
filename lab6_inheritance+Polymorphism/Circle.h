#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int radius;

public:
	Circle(); //����������� ��� ����������
	Circle(int radius);//����������� � �����������
	~Circle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};




