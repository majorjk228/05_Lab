// Лабораторная работа №5, Вариант 3 (2 семестр).
// Наследование. Виртуальные функции. Полиморфизм.

#include <iostream>
#include "Object.h"
#include "Pair.h"
#include "RIGHTANGLED.h"
#include "Vector.h"
#include <windows.h>    // Библиотека для русской локализации

void main()
{
    setlocale(LC_ALL, "Russian");

    Vector v(2);//вектор из 5 элементов
    Pair a;//объект класса Pair
    cin >> a;
    RIGHTANGLED b;// объект класса RIGHTANGLED
    RIGHTANGLED e;// объект класса RIGHTANGLED
    cin >> b;
    e = (e.Hypotenuse(b)); // вычисляем гипотенузу
    Object* p = &a;//ставим указатель на объект класса Pair
    v.Add(p);//добавляем объект в вектор
    p = &e;//ставим указатель на объект класса RIGHTANGLED
    v.Add(p); //добавляем объект в вектор
    cout << v;//вывод вектора

}

