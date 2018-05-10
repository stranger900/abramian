#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath>
#include <string>

using namespace std;

void MinMax(double *x, double *y);

void Entering(double &a, double &b, double &c, double &d) {

	cout << "Внесіть цифру A : " << endl;
	cin >> a;
	cout << "Внесіть цифру B : " << endl;
	cin >> b;
	cout << "Внесіть цифру C : " << endl;
	cin >> c;
	cout << "Внесіть цифру D : " << endl;
	cin >> d;
	
}

void main()
{
	double a, b, c, d;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering(a, b, c, d);
	
	cout << a<<" " << b << " " << c << " " << d << endl;
	MinMax(&a, &b);
	cout << a << " " << b << " " << c << " " << d << endl;
	MinMax(&c, &d);
	cout << a << " " << b << " " << c << " " << d << endl;
	MinMax(&a, &c);
	cout << a << " " << b << " " << c << " " << d << endl;
	MinMax(&b, &d);
	cout << a << " " << b << " " << c << " " << d << endl;
}
void MinMax(double *x, double *y) {
	double temp;
	if (*x > *y) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
	
}