#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void PowerA234(double a, double b = 1, double c = 1, double d = 1) {
	b = a*a;
	c = a*a*a;
	d = a*a*a*a;
	cout << a << "^2 = " << b << endl;
	cout << a << "^3 = " << c << endl;
	cout << a << "^4 = " << d << endl;
}

void main()
{
	double a, b = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть 1 число: " << endl;
	cin >> a;

	PowerA234(a);

	cout << "Внесіть 2 число: " << endl;
	cin >> a;

	PowerA234(a);

	cout << "Внесіть 3 число: " << endl;
	cin >> a;

	PowerA234(a);

	cout << "Внесіть 4 число: " << endl;
	cin >> a;

	PowerA234(a);

	cout << "Внесіть 5 число: " << endl;
	cin >> a;

	PowerA234(a);
}