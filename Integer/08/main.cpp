#include<iostream>

using namespace std;

void main()
{
	int a, b, c;
	
	//Enter data
	cout << "Enter two-digit number : " << endl; 
	cin >> a;

	//Calculations

	b = a / 10;
	c = a % 10;

	//Output data 
	
	cout << "Change place number = " << c * 10 + b  << endl;
	
}