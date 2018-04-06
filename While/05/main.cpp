#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	
	cout << endl;
	
	while (n>0) {
		n /=2;
		//cout << " n = " << n << endl;
		count++;
		if (n <2) {
			cout << count << endl;
			break;
		}
		else {
			continue;
		}
	}
	
	cout << endl;
}