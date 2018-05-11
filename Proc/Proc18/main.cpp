#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void CircleS(double &r);

void Entering(double &r) {

	cout << "Внесіть радіус : " << endl;
	cin >> r;
	
}

void main()
{
	double r, arr[3] = { 0 };
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int i = 0; i < 3; i++) {
		Entering(r);
		CircleS(r);
	}
}
void CircleS(double &r) {
	double pi = 3.14;

	cout << "Площа круга рівна : " << pi*r*r << endl;
}
