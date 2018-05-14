#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

double RingS(double &r1, double &r2);

void Entering(double &r1, double &r2) {

	cout << "Внесіть радіус R1: " << endl;
	cin >> r1;
	checkR2:
	cout << "Внесіть радіус R2: " << endl;
	cin >> r2;
	if (r2 >= r1) {
		cout << "Внесіть радіус R2 < R1, R1 = " << r1 << endl;
		goto checkR2;
	}
}

void main()
{
	double r1, r2;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int i = 0; i < 3; i++) {
		Entering(r1,r2);
		cout << RingS(r1, r2) << endl;
	}
}
double RingS(double &r1, double &r2) {
	double pi = 3.14;

	return ((pi*r1*r1) - (pi*r2*r2));
}
