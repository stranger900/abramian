﻿#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath>
#include <string>

using namespace std;

void Swap(double *x, double *y);

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
	//double *pa = &a, *pb = &b, *pc = &c, *pd = &d, *px = &x, *py = &y;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering(a, b, c, d/*pa, pb, pc, pd*/);
	
	cout << a<<" " << b << " " << c << " " << d << endl;
	Swap(&a, &b);
	cout << a << " " << b << " " << c << " " << d << endl;
	Swap(&c, &d);
	cout << a << " " << b << " " << c << " " << d << endl;
	Swap(&b, &c);
	
	cout << a << " " << b << " " << c << " " << d << endl;
}
void Swap(double *x, double *y) {
	
	double temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}