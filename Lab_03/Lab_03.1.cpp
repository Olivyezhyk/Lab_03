﻿// Lab_03_1.cpp
// < Сусяк Олег >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 29
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 1/x+4;
	// спосіб 1: розгалуження в скороченій формі
	if (x <= 1)
		B = 8 + 0,65*x;
	if (1 < x && x <= 5)
		B = log10(x)+cos((6,1+x)/2)/sin((6,1+x)/2);
	if (x > 5)
		B = sqrt(x+sqrt(2));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= 1)
		B = 8 + 0, 65 * x;
	else
		if (1 < x && x <= 5)
			B = log10(x) + cos((6, 1 + x) / 2) / sin((6, 1 + x) / 2);
		else
			B = sqrt(x + sqrt(2));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}