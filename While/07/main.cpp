﻿#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, b, sum = 0, i;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A (A < B) : " << endl;
	cin >> a;
	cout << "Внесіть число B : " << endl;
	cin >> b;
	cout << endl;

	i = b - a;
	sum = a;
	while (i>0) {
		a++;
		sum += a;
		//cout << "sum = "<<sum << "\t i = "<< i << endl;
		--i;
	}
	
	cout <<"Сума = "<< sum << endl;
	cout << endl;
}