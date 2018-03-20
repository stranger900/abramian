#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int d, m, d1, m1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Enter data
	cout << "Enter date: " << endl;
	cin >> d;
	cout << "Enter month: " << endl;
	cin >> m;
	
	//Calculation 

	switch (m) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		d1 = 31;
		break;
	}
	case 2: {
		d1 = 28;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		d1 = 30;
		break;
	}
	default: {
		cout << "Wrong number of month" << endl;
	}
	}

	if (d > d1) {
		d = d%d1;
		m += 1;
	}
	else if (d == d1) {
		d = 1;
		m += 1;
	}
	else {
		d += 1;
	}
	if (m > 12) {
		m = m % 12;
	}
	//Output
	
	cout << "Date = " << setfill('0') << setw(2) << d << "  Month = " << setfill('0') << setw(2) << m << endl;
		
}