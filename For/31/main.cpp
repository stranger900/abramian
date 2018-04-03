#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a = 2;
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++) {
		a = 2 + 1 / a;
		cout << "A" << i << " = " << a << endl;
	}
	
	cout << endl;
}