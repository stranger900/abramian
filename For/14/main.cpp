#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (int i = 1; i <= (2 * n - 1); i += 2) {
		sum += i;
		cout << "Сума = " << sum << endl;
	}
	cout << endl;
	cout << "N**2 = " << sum << endl;
	cout << endl;
}