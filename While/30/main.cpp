#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, b, c, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A: " << endl;
	cin >> a;
	cout << "Внесіть число B: " << endl;
	cin >> b;
	cout << "Внесіть число C: " << endl;
	cin >> c;
	cout << endl;
	
	double ab = a*b;
	double cc = c*c;

	while (ab >= cc) {
		ab = ab - cc;
		count++;
	}
	cout << "Кількість = " << count << endl;
	cout << endl;

}