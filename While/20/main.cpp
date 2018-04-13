#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, a;
	bool zn = false;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;

	while (n>0) {
		a = n % 10;
		if (a == 2) {
			zn = true;
		}
		n = n / 10;
	}
	if (zn) {
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}
	cout << endl;

}