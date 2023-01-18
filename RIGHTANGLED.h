#pragma once
#include "Pair.h"

//����� RIGHTANGLED ����������� �� ������ Pair
class RIGHTANGLED :
	public Pair
{
public:
	RIGHTANGLED(void);//����������� ��� ����������
public:
	~RIGHTANGLED(void);//����������
	RIGHTANGLED(int, int, int);//����������� � �����������
	RIGHTANGLED(const RIGHTANGLED&);//����������� �����������

	int Get_hypotenuse() { return hypotenuse; } //�����������
	void Set_hypotenuse(int); //��������
	void Show();//������� ��� ��������� ��������� ������ � ������� ���������

	RIGHTANGLED Hypotenuse(const RIGHTANGLED& l); // ����� �� ���������� ���������� 
	RIGHTANGLED& operator=(const RIGHTANGLED&);					  //�������� ������������

	friend istream& operator>>(istream& in, RIGHTANGLED& l);		  //�������� �����
	friend ostream& operator<<(ostream& out, const RIGHTANGLED& l); //�������� ������
protected:
	double hypotenuse;		//������� ���������� 
};
