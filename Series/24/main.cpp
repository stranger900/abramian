#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть N (1 - 100): " << endl;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Внесіть A[" << i << "]: " << endl;
		cin >> arr[i];
	}

	for (int j = 0; j < size; j++) {
		if (arr[j] == 0) {
			for (int k = j; k < size; k++) {
				sum += arr[k];
				j = k + 1;
				if (arr[k + 1] == 0) { break; break;
				}
			}
		}
	}

	cout << sum << endl;
	cout << endl;
	delete[] arr;
}