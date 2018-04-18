#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, k = 1, ak1 = 2, ak2 = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;

	while ((ak2 - ak1) < n) {

		ak2 = 2 + 1 / ak1;
		ak1++;
		k++;
		cout << "ak" << k-1 << " = " << ak1 << "\t ak" << k << " = " << ak2 << "\t K = " << k << endl;
		if ((ak2 - ak1) < n) { cout << "K = " << k << endl; break; }
		

	}
	//cout << "K = " << count << endl;
	cout << endl;

}