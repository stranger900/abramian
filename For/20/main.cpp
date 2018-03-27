#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, factorial = 1, sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		factorial *= i;
		sum += factorial;
		//cout << "Факторіал = " << factorial << endl;
		//cout << "Сума = " << sum << endl;
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
}