#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, k, count=0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	cout << "Внесіть число K : " << endl;
	cin >> k;
	cout << endl;
	
	while (n>0) {
		n -= k;
		//cout << " n = " << n << endl;
		count++;
		if (n < k) { break; }
	}
	cout << "Залишок = " << n << endl;
	cout << "Частка  = " << count << endl;
	cout << endl;
}