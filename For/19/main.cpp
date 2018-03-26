#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, factorial = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		factorial *= i;
		//cout << factorial << endl;
	}
	cout << endl;
	cout << "N! = " << factorial << endl;
	cout << endl;
}