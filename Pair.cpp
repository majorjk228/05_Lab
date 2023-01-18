#include "Pair.h"
//����������� ��� ����������
Pair::Pair(void)
{
	first = 0;
	second = 0;
}

//����������
Pair::~Pair(void)
{
}

//����������� � �����������
Pair::Pair(int F, int S)
{
	first = F;
	second = S;
}

//����������� �����������
Pair::Pair(const Pair& pair)
{
	first = pair.first;
	second = pair.second;
}

//������������ (����� ��������� �����)
void Pair::Set_first(int F)
{
	first = F;
}

void Pair::Set_second(int S)
{
	second = S;
}

//���������� �������� ���������(���������� ������������)
Pair Pair::operator*(const Pair& c)
{
	if (&c == this)return *this;
	Pair p;
	int first_sum = c.first * second;
	int second_sum = first * c.second;
	p.first = first_sum;
	p.second = second_sum;
	return p;
}

//���������� �������� ������������
Pair& Pair::operator=(const Pair& c)
{
	if (&c == this)return *this;
	first = c.first;
	second = c.second;
	return *this;
}

//���������� ������� ��� �����
istream& operator>>(istream& in, Pair& c)
{
	cout << "\nFirst: "; in >> c.first;
	cout << "\nSecond: "; in >> c.second;
	return in;
}
//���������� ������� ��� ������
ostream& operator<<(ostream& out, const Pair& c)
{
	out << "\nFirst : " << c.first;
	out << "\nSecond : " << c.second;

	out << "\n";
	return out;
}

void Pair::Show()
{
	cout << "\nFirst : " << first;
	cout << "\nSecond : " << second;
	
	cout << "\n";
}