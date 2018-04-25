#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, count = 0, a = 0;
	float b = 0;

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
		if (arr[j] < arr[j - 1]) {
			//cout << arr[j - 1] << endl;
			b = arr[j - 1];
			count++;
		}
		else {
			b = arr[j];
			break;
		}
	}

	if (count == (size )) {
		
	    cout << "***" << a << endl; 
	}
	else { 
		cout << b << endl; 
	}

	
	cout << endl;
	delete[] arr;
}