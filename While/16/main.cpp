#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double s = 10, p;
	int k = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число P (0 < P < 50): " << endl;
	cin >> p;
	cout << endl;
	
	while (true) {
		s += s*(p / 100);
		k++;
		cout << " *** Сума = " << s << "\t K = " << k << endl;
		if (s > 200)  {
			cout << "Сума = " << s << "\t K = " << k << endl;
			break;
		}
				
	}
	cout << endl;
}