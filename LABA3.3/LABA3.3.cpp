﻿// Lab_03_3.cpp
// < Гребень Юрій >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x=5; // вхідний аргумент
	double R=9; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -2)
		y = 1;
	else
		if (-2 < x && x <= 4)
			y = -R;
		else
			if (4 < x && x <= 8-R)
				y = -R;
			else
				if (8-R < x && x <= 8+R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}