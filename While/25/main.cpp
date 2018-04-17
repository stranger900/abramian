#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, f1 = 0, f2 = 1, rez =0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;

	while (f2<n) {
		f1 = f2;
		f2 = rez;
		rez = f1 + f2;
		//cout << "rez = " << rez << endl;
		if (n < rez) { cout << rez << endl; break; }
	}
	
	cout << endl;

}