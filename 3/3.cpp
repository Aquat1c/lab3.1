
// Lab_03_1.cpp
// Гудима Михайло
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 5
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

	A = 1. / (fabs(x + 2))+1;
	// спосіб 1: розгалуження в скороченій формі
	if (0 < x && x < 1)
		B = -(1 / x + log(x * x));
	if (1 <= x && x < 4)
		B = -(1/tan(x+4/sqrt(11)+3));
	if (x >= 4)
		B = -(sqrt(1 + fabs((cos(x)) * (cos(x)) * (cos(x)))));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (0 < x && x < 1)
		B = -(1 / x + log(x * x));
	else
		if (1 <= x && x < 4)
			B = -(1 / tan(x + 4 / sqrt(11) + 3));
		else
			B = -(sqrt(1 + fabs((cos(x)) * (cos(x)) * (cos(x)))));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}