#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

int RootsCount(double &a, double &b, double &c);

void Entering(double &a, double &b, double &c) {

	cout << "Внесіть цифру A : (A != 0)" << endl;
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
	
	cout << "Кількість коренів квадратного рівняння = " << RootsCount(a, b, c) << endl;
}
int RootsCount(double &a, double &b, double &c) {
	double d = b*b - 4 * a*c;
	
	if (d < 0) {
		return 0;
	}
	else if (d == 0) {
		return 1;
	}
	else if (d > 0) {
		return 2;
	}
	else {
		cout << "Something wrong" << endl;
	}
}
