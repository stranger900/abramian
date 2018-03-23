#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, count = 0, d = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (double i=1.1; count < n; i+=0.1) {
		cout <<  "i = " << i << endl;
		count += 1;
		d *= i;
	}
	cout << "Множиників = " << n << endl;
	cout << "Добуток = " << d << endl;
}