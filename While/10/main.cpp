#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, a, b;
	int k=0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	cout << endl;
	
	while (true) {
		k += 1;
		a = pow(3, k);
		b = pow(3, k + 1);
		if (a < n && b >= n)  {
			cout << "K = " << k << endl;
			break;
		}
				
	}
	cout << endl;
}