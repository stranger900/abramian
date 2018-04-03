#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n;
	double a, a1 = 1, a2 = 2;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 1) : " << endl;
	cin >> n;
	cout << endl;

	cout << "A1 = " << a1 << endl;
	cout << "A2 = " << a2 << endl;

	for (int i = 3; i <= n; i++) {
		a = (a1 + 2 * a2) / 3;
		cout << "A" << i << " = " << a << endl;
		a1 = a2;
		a2 = a;
	}
	
	cout << endl;
}