﻿#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x,  rez, sum = 0, factorial = 1, dob = 1;
	int n, sign = -1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число X : " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;
	
	sum = x;
	for (int i = 1; i <= (n * 2 +1); i++) {
		factorial *= i;
		dob *= x;

		if (i>2 && i % 2 == 1) {
			rez = sign*dob / factorial;
			sum += rez;
			sign *= (-1);
			cout << "Результат = " << rez << endl;
			cout << "sum = " << sum << endl;
		}
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	cout << "sin(x) = " << sin(x) << endl;
}