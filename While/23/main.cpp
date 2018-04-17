#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int a, b, c;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A: " << endl;
	cin >> a;
	cout << "Внесіть число B: " << endl;
	cin >> b;
	cout << endl;

	while (b != 0) {
		c = b;
		b = a % b;
		a = c;
		//cout << "a = " << a << "b = " << b << "c = " << c << endl;
	}
	cout << "a = " << a << endl;
	cout << endl;

}