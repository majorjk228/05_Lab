#pragma once
#include <string>
#include <iostream>
#include "object.h"
using namespace std;

class Pair:
	public Object
{
	//����������� ��� ����������
public:
	Pair(void);
public:
	//����������
	virtual ~Pair(void);

	void Show();//������� ��� ��������� ��������� ������ � ������� ���������

	//���������� � �����������
	Pair(int, int);
	//����������� �����������
	Pair(const Pair&);

	//���������
	int Get_first() { return first; }
	int Get_second() { return second; }

	//������������
	void Set_first(int);
	void Set_second(int);

	//���������� �������� ������������	
	Pair operator*(const Pair&);
	Pair& operator=(const Pair&);

	//���������� ���������-������� �����-������
	friend istream& operator>>(istream& in, Pair& c);
	friend ostream& operator<<(ostream& out, const Pair& c);

	//��������
protected:
	int first;
	int second;
};
