﻿#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, sum = 1, i = 1.1; //sign = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	while (n > 0) {
		sum *=  i;
		cout << "sum = "<<sum << "\t i = "<< i << " n = " << n << endl;
		--n;
		i += 0.1;
		//sign *= (-1);
	}
	
	cout <<"Добуток = "<< sum << endl;
	cout << endl;
}