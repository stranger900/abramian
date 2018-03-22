#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (double i=0; i <= n; i++) {
		cout << "(N + " << i << ")**2 = " << (n+i)*(n+i) << endl;
		count += (n + i)*(n + i);
	}
	cout << "Сума = " << count << endl;
}