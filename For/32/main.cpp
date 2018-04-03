#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a = 1;
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	for (double i = 1; i <= n; i++) {
		a = (a + 1) / i;
		cout << "A" << i << " = " << a << endl;
	}
	
	cout << endl;
}