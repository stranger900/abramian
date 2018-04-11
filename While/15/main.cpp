#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, sum = 1;
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	while (n > 0) {
		sum *= a;
		//cout << "sum = "<<sum << endl;
		--n;
	}
	cout << endl;
	cout <<"Добуток = "<< sum << endl;
	cout << endl;
}