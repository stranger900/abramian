#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n, sum = 0, k = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	cout << endl;
	
	while (true) {
		k += 1;
		sum += k;
		
		if (sum <= n && (sum + k + 1) > n)  {
			cout << "Сума = " << sum << "\t K = " << k << endl;
			break;
		}
				
	}
	cout << endl;
}