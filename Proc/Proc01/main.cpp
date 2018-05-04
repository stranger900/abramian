#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

double PowerA3(double a, double b) {
	b = a*a*a;
	return b;
}

void main()
{
	double a, b = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть 1 число: " << endl;
	cin >> a;

	cout << PowerA3(a, b) << endl;

	cout << "Внесіть 2 число: " << endl;
	cin >> a;

	cout << PowerA3(a, b) << endl;

	cout << "Внесіть 3 число: " << endl;
	cin >> a;

	cout << PowerA3(a, b) << endl;

	cout << "Внесіть 4 число: " << endl;
	cin >> a;

	cout << PowerA3(a, b) << endl;

	cout << "Внесіть 5 число: " << endl;
	cin >> a;

	cout << PowerA3(a, b) << endl;
}