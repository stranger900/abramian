#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath> 

using namespace std;

double arr[4] = { 0 };

void RectPS( double p = 1, double s = 1) {

	double side1 = abs(arr[0]) + abs(arr[1]);
	double side2 = abs(arr[2]) + abs(arr[3]);

	p = side1 * 2 + side2 * 2;

	s = side1 * side2;

	cout << "Площа = " << s << endl;
	cout << "Периметр = " << p << endl;
	cout << endl;
}

void Entering() {

	for (int i = 0; i < 4; i++) {
		cout << "Внесіть координату " << i << " :  (0 = x1, 1 = x2, 2 = y1, 3 = y2)" << endl;
		cin >> arr[i];
	}
}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering();
	RectPS();
}