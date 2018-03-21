#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int k, n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число K : " << endl;
	cin >> k;
	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << k << endl;
	}
}