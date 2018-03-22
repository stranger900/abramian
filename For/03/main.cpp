#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int a, b, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число B (B > A) : " << endl;
	cin >> b;
	cout << endl;

	b -= 1;
	for (b; b>(a); b--) {
		cout << b << endl;
		count++;
	}
	cout << endl;
	cout << "Кількість чисел = "<< count << endl;
}