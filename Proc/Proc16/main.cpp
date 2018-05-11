#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

double Sign(double x);

void Entering(double &a, double &b) {

	cout << "Внесіть цифру A : " << endl;
	cin >> a;
	cout << "Внесіть цифру B : " << endl;
	cin >> b;
	
}

void main()
{
	double a, b, c;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering(a, b);
	
	cout << "Sign(A) + Sign(B) = " << Sign(a) + Sign(b) << endl;
}
double Sign(double x) {
	if (x < 0) {
		return (-1);
	}
	else if (x == 0) {
		return 0;
	}
	else if (x > 0) {
		return 1;
	}
	else {
		cout << "Something wrong" << endl;
	}
}
