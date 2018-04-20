#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size;
	bool b = false;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	cout << "Внесіть N : " << endl;
	cin >> size;

	int *arr = new int[size];

	srand(time(NULL));
	for (int i=0; i<size;i++){
		arr[i] = 50 - rand() % 101; //число від -50 до +50
		//cout << arr[i] << endl;

		if ((arr[i]) >=  0) {  
			b = true;
		}
	}

	delete[] arr;
	cout << endl;
	if (b) {
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}
	cout << endl;
}