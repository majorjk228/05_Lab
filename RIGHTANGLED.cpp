#include "RIGHTANGLED.h"
#include<cmath> // ƒл€ вычислений в степень

//конструктор без параметров
RIGHTANGLED::RIGHTANGLED(void) :Pair()
{
	hypotenuse = 0;
}

//дестрктор
RIGHTANGLED::~RIGHTANGLED(void)
{
}

//конструктор с параметрами
RIGHTANGLED::RIGHTANGLED(int F, int S, int G) :Pair(F, S)
{
	hypotenuse = G;
}

//конструктор копировани€
RIGHTANGLED::RIGHTANGLED(const RIGHTANGLED& L)
{
	first = L.first;
	second = L.second;
	hypotenuse = L.hypotenuse;
}

//модификатор
void RIGHTANGLED::Set_hypotenuse(int G)
{
	hypotenuse = G;
}

// ћетод который считает гипотенузу
RIGHTANGLED RIGHTANGLED::Hypotenuse(const RIGHTANGLED& L)
{
	if (&L == this)return *this;
	first = L.first;
	second = L.second;
	hypotenuse = sqrt(pow(first, 2) + pow(second, 2));

	RIGHTANGLED p;
	p.first = pow(first, 2);
	p.second = pow(second, 2);
	p.hypotenuse = hypotenuse;

	return p;
}

//оперци€ присваивани€
RIGHTANGLED& RIGHTANGLED::operator=(const RIGHTANGLED& L)
{
	if (&L == this)return *this;
	first = L.first;
	second = L.second;
	hypotenuse = L.hypotenuse;
	return *this;
}

//операци€ ввода
istream& operator>>(istream& in, RIGHTANGLED& l)
{
	cout << "\First catet: "; in >> l.first;
	cout << "\nSecond catet: "; in >> l.second;

	return in;
}

//операци€ вывода
ostream& operator<<(ostream& out, const RIGHTANGLED& l)
{
	out << "\nFirst: " << l.first;
	out << "\nSecond: " << l.second;
	out << "\nHypotenuse: " << l.hypotenuse;
	out << "\n";
	return out;
}

void RIGHTANGLED::Show()
{
	cout << "\nFirst : " << first;
	cout << "\nSecond : " << second;	
	cout << "\nHypotenuse: " << hypotenuse;
	cout << "\n";
}

