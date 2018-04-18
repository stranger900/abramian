#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, k = 1, a1 = 1, a2 = 2, ak = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;
	//a3 = (a1 + 2 * a2) / 3;

	while (k<10) {
		
		ak = (a1 + 2 * a2) / 3;
		
		//cout << "ak = " << ak << " a1 = " << a1 << " a2 = " << a2 << " ak - a2 = " << abs(ak - a2) << endl;
		if (abs(ak - a2) < n) { cout << " *** K = " << k << " ak = " << ak << " ak-1 = " << a2 << endl; break; }
		a1 = a2;
		a2 = ak;
		k++;

	}
	//cout << "K = " << count << endl;
	cout << endl;

}