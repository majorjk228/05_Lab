#include "Pair.h"
//конструктор без параметров
Pair::Pair(void)
{
	first = 0;
	second = 0;
}

//деструктор
Pair::~Pair(void)
{
}

//конструктор с параметрами
Pair::Pair(int F, int S)
{
	first = F;
	second = S;
}

//конструктор копирования
Pair::Pair(const Pair& pair)
{
	first = pair.first;
	second = pair.second;
}

//модификаторы (метод изменения полей)
void Pair::Set_first(int F)
{
	first = F;
}

void Pair::Set_second(int S)
{
	second = S;
}

//перегрузка операции Умножения(вычесление произведения)
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

//перегрузка операции присваивания
Pair& Pair::operator=(const Pair& c)
{
	if (&c == this)return *this;
	first = c.first;
	second = c.second;
	return *this;
}

//глобальная функция для ввода
istream& operator>>(istream& in, Pair& c)
{
	cout << "\nFirst: "; in >> c.first;
	cout << "\nSecond: "; in >> c.second;
	return in;
}
//глобальная функция для вывода
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