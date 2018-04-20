#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size;
	
	//double arr[size];
	double sum = 0, fir = 0, sec = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	cout << "Внесіть N : " << endl;
	cin >> size;

	double *arr = new double[size];

	srand(time(NULL));
	for (int i=0; i<size;i++){
		arr[i] = (0.1 * (rand() % 10)) + (rand() % 10);
		
		fir = arr[i] - (arr[i] - (int)arr[i]); //ціла частина
		sec = (arr[i] - (int)arr[i]);          //дробова частина
		
		if ((sec * 10) >= 5) {  //заокруглюєм дробову частину
			sec = 1;
		}
		else {
			sec = 0;
		}

		sum += fir + sec; //сума заокруглених значень

		cout << fixed;
		cout.precision(1);
		cout << arr[i] << "\t"<< fir + sec << endl;
	}

	delete[] arr;
	cout << "Сума = " << sum  << endl;
	cout << endl;

}