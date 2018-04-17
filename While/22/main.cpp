#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n;
	double a, i = 2;
	bool zn = false;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;

	while (n>i) {
		a = n / i;
		if ((a-(int)a) == 0) {
			zn = true;
			cout << "Дільники = " << a << endl;
		}
		
		i++;
	}
	if (zn) {
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}
	cout << endl;

}