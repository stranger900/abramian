#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n;
	double a, a1 = 1, a2 = 2, a3 = 3;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 2) : " << endl;
	cin >> n;
	cout << endl;

	cout << "A1 = " << a1 << endl;
	cout << "A2 = " << a2 << endl;
	cout << "A3 = " << a3 << endl;

	for (int i = 4; i <= n; i++) {

		a = a3 + a2 - 2 * a1;
		cout << "A" << i << " = " << a << endl;
		a1 = a2;
		a2 = a3;
		a3 = a;
	}
	
	cout << endl;
}