#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a[10], sum=0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int i=0; i<10;i++){
		cout << "Внесіть елемент масиву a[" << i << "] : " << endl;
		cin >> a[i];
		sum += a[i];
	}
	cout << "Сума = " << sum << endl;
	cout << endl;

}