#pragma once
#include "Pair.h"

//класс RIGHTANGLED наследуетс€ от класса Pair
class RIGHTANGLED :
	public Pair
{
public:
	RIGHTANGLED(void);//конструктор без параметров
public:
	~RIGHTANGLED(void);//деструктор
	RIGHTANGLED(int, int, int);//конструктор с параметрами
	RIGHTANGLED(const RIGHTANGLED&);//конструктор копировани€

	int Get_hypotenuse() { return hypotenuse; } //модификатор
	void Set_hypotenuse(int); //селектор
	void Show();//функци€ дл€ просмотра атрибутов класса с помощью указател€

	RIGHTANGLED Hypotenuse(const RIGHTANGLED& l); // ћетод на вычисление гипотинузы 
	RIGHTANGLED& operator=(const RIGHTANGLED&);					  //операци€ присваивани€

	friend istream& operator>>(istream& in, RIGHTANGLED& l);		  //операци€ ввода
	friend ostream& operator<<(ostream& out, const RIGHTANGLED& l); //операци€ вывода
protected:
	double hypotenuse;		//атрибут √ипотенуза 
};
