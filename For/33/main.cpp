#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, f, f1=1, f2=1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 1) : " << endl;
	cin >> n;
	cout << endl;

	for (int i = 3; i <= n; i++) {
		f = f2 + f1;
		cout << "F" << i << " = " << f << endl;
		f1 = f2;
		f2 = f;
	}
	
	cout << endl;
}