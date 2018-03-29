#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x,  rez, sum = 1, factorial = 1, dob = 1;
	int n, sign = -1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число X : " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;
	
	for (int i = 1; i <= (n * 2); i++) {
		factorial *= i;
		if (i % 2 == 0) {
			dob *= x;
			rez = sign*dob*dob / factorial;
			sum += rez;
			sign *= (-1);
			cout << "Результат = " << rez << endl;
			cout << "sum = " << sum << endl;
		}
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	cout << "cos(x) = " << cos(x) << endl;
}