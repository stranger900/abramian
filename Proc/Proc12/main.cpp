#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath>
#include <string>

using namespace std;

void SortInc3(double *a, double *b, double *c);
void Swap(double *x, double *y);
void Entering(double &a, double &b, double &c) {

	cout << "Внесіть цифру A : " << endl;
	cin >> a;
	cout << "Внесіть цифру B : " << endl;
	cin >> b;
	cout << "Внесіть цифру C : " << endl;
	cin >> c;
	
	
}

void main()
{
	double a, b, c;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering(a, b, c);
	cout << a << " " << b << " " << c << endl;
	
	SortInc3(&a, &b, &c);
	cout << a << " " << b << " " << c << endl;
}
void SortInc3(double *a, double *b, double *c) {
	double min, max, ave;
	if (*a > *b) { Swap(a, b); }
	if (*b > *c) { Swap(b, c); }
	if (*a > *c) { Swap(a, c); }
	if (*a > *b) { Swap(a, b); }
}
void Swap(double *x, double *y) {

	double temp;
	temp = *x;
	*x = *y;
	*y = temp;

}