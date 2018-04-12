#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double s = 1000, p;
	int k = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число P (0 < P < 25): " << endl;
	cin >> p;
	cout << endl;
	
	while (true) {
		s += s*(p / 100);
		k++;
		//cout << " *** Сума = " << s << "\t K = " << k << endl;
		if (s > 1100)  {
			cout << "Сума = " << s << "\t K = " << k << endl;
			break;
		}
				
	}
	cout << endl;
}