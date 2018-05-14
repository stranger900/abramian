#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

double TriangleP(double &a, double &h);

void Entering(double &a, double &h) {

	cout << "Внесіть основу рівнобедреного трикутника a: " << endl;
	cin >> a;
	
	cout << "Внесіть висоту трикутника h: " << endl;
	cin >> h;
	
}

void main()
{
	double a, h;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int i = 0; i < 3; i++) {
		Entering(a,h);
		cout << TriangleP(a, h) << endl;
	}
}
double TriangleP(double &a, double &h) {
	double b = sqrt((a / 2)*(a / 2) + h*h);

	return (b + b + a);
}
