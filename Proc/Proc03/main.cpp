#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath> 

using namespace std;

void Mean(double x, double y, double aMean = 0, double gMean = 0) {
	aMean = (x + y) / 2;
	gMean = sqrt(x*y);
	cout << "Середнє арифметичне  " << x << " i " << y << " = " << aMean << endl;
	cout << "Середнє геометричне  " << x << " i " << y << " = " << gMean << endl;
	cout << endl;
}

void main()
{
	double a, b, c, d;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть A: " << endl;
	cin >> a;

	cout << "Внесіть B: " << endl;
	cin >> b;

	cout << "Внесіть C: " << endl;
	cin >> c;

	cout << "Внесіть D: " << endl;
	cin >> d;

	Mean(a, b);
	Mean(a, c);
	Mean(a, d);
}