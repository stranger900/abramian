#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, f1 = 0, f2 = 1, rez =0, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;

	while (rez<n) {
		f1 = f2;
		f2 = rez;
		rez = f1 + f2;
		count++;
		//cout << "N = " << rez << "\t K = " << count << endl;
		
	}
	cout << "K = " << count << endl;
	cout << endl;

}