#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N : " << endl;
	cin >> a;

	for (double i=1; i <= a; i++) {
		cout << "1/" << i << " = " << 1 / i << endl;
		count += (1/i);
	}
	cout << "Сума = " << count + 1 << endl;
}