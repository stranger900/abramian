#include<iostream>

using namespace std;

void main()
{
	int a, b, c, d;
	
	//Enter data
	cout << "Enter three-digit number : " << endl; 
	cin >> a;

	//Calculations

	b = a % 10;
	c = (a % 100) / 10;
	d = a / 100;

	//Output data 
	
	cout << "Result = " << d << b << c << endl;
	
}