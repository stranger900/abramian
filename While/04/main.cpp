#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	
	cout << endl;
	
	while (n>0) {
		n -= 3;
		//cout << " n = " << n << endl;
	}
	if (n == 0) {
		cout << "TRUE" << endl;
	}else{
	cout << "FALSE" << endl;
	}
	cout << endl;
}