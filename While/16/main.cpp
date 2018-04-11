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

	while (n > sum) {
		sum *= a;
		if (sum > n) {
			break;
		}
		cout << "Квадрат = "<< sum << endl;
	}
	
	cout << endl;
}