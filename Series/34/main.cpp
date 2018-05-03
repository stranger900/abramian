#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int sizeK, sizeN, number = 0, count = 0, sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть K: " << endl;
	cin >> sizeK;
	cout << "Внесіть N: " << endl;
	cin >> sizeN;

	srand(time(NULL));

	int **arr = new int* [sizeK];

	for (int i = 0; i < sizeK; i++) {			
		arr[i] = new int[sizeN];
	}
	////////////////////////////// 

	for (int i = 0; i < sizeK; i++) {
		for (int j = 0; j < sizeN; j++) {
			arr[i][j] = rand() % 10;
			sum += arr[i][j];
			if (arr[i][j] == 2) { count++;}
			
			cout << "arr ["<<i + 1 <<"]["<< j + 1 <<"] = " << arr[i][j] << endl;
		}
		if (count > 0) { cout << "\t\tSum = " << sum << endl; }
		else { cout << "\t\tSum = " << 0 << endl; }
		count = 0;
		sum = 0;

	}
	
	//////////////////////////////
	for (int i = 0; i < sizeK; i++) {
		delete[] arr[i];
	}
	cout << endl;
	delete[] arr;
}