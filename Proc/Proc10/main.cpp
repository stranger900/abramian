#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath>
#include <string>

using namespace std;

void Swap(double x, double y);

void Entering(double *pa, double *pb, double *pc, double *pd) {

	cout << "Внесіть цифру A : " << endl;
	cin >> *pa;
	cout << "Внесіть цифру B : " << endl;
	cin >> *pb;
	cout << "Внесіть цифру C : " << endl;
	cin >> *pc;
	cout << "Внесіть цифру D : " << endl;
	cin >> *pd;
	
}

void main()
{
	double a, b, c, d;
	double *pa = &a, *pb = &b, *pc = &c, *pd = &d;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering(pa, pb, pc, pd);

	Swap(a, b);
}
void Swap(double x, double y) {
	cout << "Перше число = " << x << "\t Друге число = " << y << endl;
	double temp;
	temp = x;
	x = y;
	y = temp;
	cout << "Перше число = " << x << "\t Друге число = " << y << endl;
	
}