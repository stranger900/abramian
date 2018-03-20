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
	
	cout << "Внесіть номер значення : " << endl;
	cout << "1. - радіус R" << endl;
	cout << "2. - діаметр D=2*R" << endl;
	cout << "3. - довжина L=2*3.14*R" << endl;
	cout << "4. - площа S=3.14*R2" << endl;
	cin >> a;
	cout << "Внесіть значення " << endl;
	cin >> b;

	switch (a) {
	case 1: {
		cout << "R = " << b << endl;
		cout << "D = " << 2*b << endl;
		cout << "L = " << 2*3.14*b << endl;
		cout << "S = " << 3.14*b*b << endl;
		break;
	}
	case 2: {
		cout << "R = " << b/2 << endl;
		cout << "D = " << b << endl;
		cout << "L = " << 2 * 3.14*(b/2) << endl;
		cout << "S = " << 3.14*(b/2)*(b/2) << endl;
		break;
	}
	case 3: {
		cout << "R = " << b/(2*3.14) << endl;
		cout << "D = " << (b / (2 * 3.14)) *2 << endl;
		cout << "L = " << b << endl;
		cout << "S = " << 3.14*(b /( 2 * 3.14))*(b / (2 * 3.14)) << endl;
		break;
	}
	case 4: {
		cout << "R = " << sqrt(b/3.14) << endl;
		cout << "D = " << sqrt(b / 3.14)*2 << endl;
		cout << "L = " << 2 * 3.14*(sqrt(b / 3.14)) << endl;
		cout << "S = " << b << endl;
		break;
	}
	default: {
		cout << "Something wrong" << endl;
	}
	}

}