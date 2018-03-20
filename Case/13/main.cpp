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
	cout << "1. - катет А" << endl;
	cout << "2. - гіпотенуза c=A*sqrt(2)" << endl;
	cout << "3. - висота h, опущена на гіпотенузу h=c/2" << endl;
	cout << "4. - площа S=c*h/2" << endl;
	cin >> a;
	cout << "Внесіть значення " << endl;
	cin >> b;

	switch (a) {
	case 1: {
		cout << "A = " << b << endl;
		cout << "c = " << b*sqrt(2) << endl;
		cout << "h = " << b*sqrt(2)/2 << endl;
		cout << "S = " << (b*sqrt(2)*b*sqrt(2) / 2) /2 << endl;
		break;
	}
	case 2: {
		cout << "A = " << b/ sqrt(2) << endl;
		cout << "c = " << b << endl;
		cout << "h = " << b / 2 << endl;
		cout << "S = " << ((b*sqrt(2)*b*sqrt(2) / 2)/2)/2 << endl;
		break;
	}
	case 3: {
		cout << "A = " << (b*2)/sqrt(2) << endl;
		cout << "c = " << b*2 << endl;
		cout << "h = " << b << endl;
		cout << "S = " << (b*2*b) / 2 << endl;
		break;
	}
	case 4: {
		cout << "A = " << sqrt(b * 4)/sqrt(2) << endl;
		cout << "c = " << sqrt(b*4)<< endl;
		cout << "h = " << sqrt(b) << endl;
		cout << "S = " << b << endl;
		break;
	}
	default: {
		cout << "Something wrong" << endl;
	}
	}

}