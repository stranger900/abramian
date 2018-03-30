#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x, rez, sum = 0, dob = 1, factorial = 1;
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число X (X<1): " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;

	//sum = x;
	//dob = x;
	for (int i = 1; i <= (2*n+1); i++) {
		factorial *= i;
		dob *= x;
		if (i % 2 != 0) {
			rez = dob / factorial;
			sum += rez;
			//cout << "sum = " << sum << endl;
		}
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	cout << "asin(x) = " << asin(x) << endl;
}