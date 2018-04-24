#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, count = 1, c = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть N (1 - 100): " << endl;
	cin >> size;
	
	int *arr = new int[size];

	for (int i=1; i <= size; i++){
		arr[i] = count;
		//cout << i << "\t" << arr[i] <<"\t"<<c<< endl;
		count++;
		c++;
		if (c == 3) {
			count--;
			c = 0;
		}
		if (arr[i] != arr[i - 1]) {
			cout <<i<<"\t"<< arr[i] << endl;
		}
	}

	cout << endl;
	delete[] arr;
}