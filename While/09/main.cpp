#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, a = 1, k=0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	cout << endl;
	
	while (true) {
		k += 1;
		a = pow(3, k);
		if (a > n) {
			cout << "K = " << k << endl;
			break;
		}
				
	}
	cout << endl;
}