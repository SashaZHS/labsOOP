// lab5.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include<iostream>


using namespace std;
//. ���������� ����� �������������� � �������� ���������� a � b � ������� ��������������.
//���������� ������ ������, �������������� ������ � ���� ����������.
//������� �����, ������������ ������� ��������������. 
//������ ����� ������������ ��� ������: 
//� ����������� ������������� � �������������� ������ ��� ������ �������� ���������� (�� ��������� �������� ������������� �� ��������� 2 � 4);
//� ����������� �����������, ����������� � �������� ��������� ������ �� ������ ������ ��������������, 
//� ��������� ������������� �� ���������, ������� ������� ������� ����������� �������. 
//������� ������������������ ����������� ������ ���������� �� �������������� � ������� ������� ������� �������������� �� �����

class Rectangle
{
private:
	int a;
	int b;

public:
	Rectangle(int Val_a, int Val_b) : a(2), b(4)
	{
		a = Val_a;
		b = Val_b;
	}

	Rectangle() {
		a = 2;
		b = 4;
	}

	Rectangle(Rectangle &rect) {
		int copiedA = rect.get_a();
		int copiedB = rect.get_b();
		if (copiedA < copiedB) {
			a = copiedA;
			b = copiedA;
		}
		else
		{
			a = copiedB;
			b = copiedB;
		}
	}

	int get_a() {
		return a;
	}

	int get_b() {
		return b;
	}

	int area() const
	{
		int area = a * b;
		return area;
	}
};

int main() {

	Rectangle R(3, 5);
	Rectangle G(R);
	Rectangle* arr[] = { new Rectangle(3, 5), new Rectangle(R), new Rectangle };
	for(int i = 0;i<3;i++)
		cout << "Area = " << arr[i]->area() << endl;

	system("pause");
	return 0;
}