#include<iostream>

using namespace std;

void main()
{
	int a, b;
	
	//Enter data
	cout << "Enter number biger 999 : " << endl; 
	cin >> a;

	//Calculations

	b = (a % 1000) / 100;

	//Output data 
	
	cout << "Result = " << b << endl;
	
}