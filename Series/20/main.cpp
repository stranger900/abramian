#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть N (1 - 100): " << endl;
	cin >> size;

	int *arr = new int[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;
		cout << i << "\t" << arr[i] << endl;
	}

	for(int j=1; j<=size; j++){
		if (arr[j] > arr[j - 1]) {
			cout << arr[j - 1] << endl;
			count++;
		}
	}


	cout << endl;
	cout << "Кількість = " << count << endl;
	cout << endl;
	delete[] arr;
}