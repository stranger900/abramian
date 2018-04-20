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
		
	cout << "Внесіть N : " << endl;
	cin >> size;

	int *arr = new int[size];

	srand(time(NULL));
	for (int i=0; i<size;i++){
		arr[i] = rand() % 100;
		
		if ((arr[i])%2 == 0) {  
			count++;
			cout << arr[i] << endl;
		}
	}

	delete[] arr;
	cout << "Кількість = " << count << endl;
	cout << endl;

}