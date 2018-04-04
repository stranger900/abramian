#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, k, rez, sum=0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	
	cout << endl;

	for (int i = 1; i <= n; i++) {
		rez = 1;
		for (int j = ((n+1)-i); j > 0; j--) {
			rez *= i;
			cout << "\t rez = " << rez << endl;
		}
		sum += rez;
		cout << "sum = " << sum << endl;

	}
	
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
}