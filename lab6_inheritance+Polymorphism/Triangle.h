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
	Triangle(); //����������� ��� ����������
	Triangle(int side, int height, string color);//����������� � �����������
	~Triangle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};









