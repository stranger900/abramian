#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x, n, factorial = 1, sum = 1, step = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число X : " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		step *= x;
		factorial *= i;
		sum += (step/factorial);
		//cout << "Факторіал = " << factorial << endl;
		//cout << "Сума = " << sum << endl;
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
}