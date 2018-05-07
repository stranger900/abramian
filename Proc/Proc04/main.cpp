#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath> 

using namespace std;

void TrianglePS(double a, double p = 1, double s = 1) {
	s = (a*a*sqrt(3 ))/ 4;
	p = 3 * a;
	cout << "Площа = " << s << endl;
	cout << "Периметр = " << p << endl;
	cout << endl;
}

void main()
{
	double a, b, c, d;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть сторону 1-го трикутника: " << endl;
	cin >> a;

	cout << "Внесіть сторону 2-го трикутника: " << endl;
	cin >> b;

	cout << "Внесіть сторону 3-го трикутника: " << endl;
	cin >> c;

	TrianglePS(a);
	TrianglePS(b);
	TrianglePS(c);
}