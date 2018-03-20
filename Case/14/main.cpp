#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int a;
	double b;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть номер елемента : " << endl;
	cout << "1. - сторона А" << endl;
	cout << "2. - радіус вписаного кола R1 = A*sqrt(3/6)" << endl;
	cout << "3. - радіус описаного кола R2 = 2 * R1" << endl;
	cout << "4. - площа S=A * A * sqrt(3/4)" << endl;
	cin >> a;
	cout << "Внесіть значення " << endl;
	cin >> b;

	switch (a) {
	case 1: {
		cout << "A = " << b << endl;
		cout << "R1 = " << b*sqrt((double)1/2) << endl;
		cout << "R2 = " << b*sqrt((double)1/2) * 2<< endl;
		cout << "S = " << b * b * sqrt((double)3/4) << endl;
		break;
	}
	case 2: {
		cout << "A = " << b/ sqrt((double)1/2) << endl;
		cout << "R1 = " << b << endl;
		cout << "R2 = " << b * 2 << endl;
		cout << "S = " << (b / sqrt((double)1 / 2))*(b / sqrt((double)1 / 2))*sqrt((double)3/4) << endl;
		break;
	}
	case 3: {
		cout << "A = " << (b/2)/sqrt((double)1/2) << endl;
		cout << "R1 = " << b/2 << endl;
		cout << "R2 = " << b << endl;
		cout << "S = " << ((b / 2) / sqrt((double)1 / 2))*((b / 2) / sqrt((double)1 / 2))* sqrt((double)3 / 4) << endl;
		break;
	}
	case 4: {
		cout << "A = " << sqrt(b/ ((double)3/4)) << endl;
		cout << "R1 = " << sqrt(b / ((double)3 / 4)) * sqrt((double)1/2) << endl;
		cout << "R2 = " << (sqrt(b / ((double)3 / 4)) * sqrt((double)1 / 2)) * 2 << endl;
		cout << "S = " << b << endl;
		break;
	}
	default: {
		cout << "Something wrong" << endl;
	}
	}

}