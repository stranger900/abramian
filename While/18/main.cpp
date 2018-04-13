#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	__int64 n;
	int	count = 0, sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;
	
	while (n>0) {
		sum += n % 10;
		
		n = n / 10;
		count++;
		cout << " ***** Сума = " << sum << "\t Кількість цифр = " << count << endl;
	}
	cout << "Сума = " << sum << "\t Кількість цифр = " << count << endl;
	cout << endl;
}