#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x, n, sign = -1, rez, sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число X : " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;
	sum = x;
	for (int i = 1; i <= n; i++) {
		rez = sign*x*x / (2 * i*(2 * i + 1));
		sum += rez;
		sign *= (-1);
		//cout << "Результат = " << rez << endl;
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	cout << "sin(x) = " << sin(x) << endl;
}