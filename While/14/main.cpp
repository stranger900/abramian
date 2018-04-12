#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double sum = 0, a, k = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << endl;
	
	while (true) {
		k += 1;
		sum += (1/k);
		cout << " *** Сума = " << sum << "\t K = " << k << endl;
		if (sum < a && (sum + (1/(k+1)) ) > a)  {
			cout << "Сума = " << sum << "\t K = " << k << endl;
			break;
		}
				
	}
	cout << endl;
}