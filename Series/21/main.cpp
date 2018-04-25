#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, count = 0;
	bool b = false;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть N (1 - 100): " << endl;
	cin >> size;

	float *arr = new float[size];

	//srand(time(NULL));
	for (int i = 0; i < size; i++) {
		cout << "Внесіть A[" << i << "]: " << endl;
		cin >> arr[i];
	}

	for(int j=1; j<=size; j++){
		if (arr[j] > arr[j - 1]) {
			//cout << arr[j - 1] << endl;
			count++;
		}
	}

	if (count == (size - 1)) {
		b = true;
	}

	if (b) { cout << "TRUE" << endl; }
	else { cout << "FALSE" << endl; }

	
	cout << endl;
	delete[] arr;
}