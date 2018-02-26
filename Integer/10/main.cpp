#include<iostream>

using namespace std;

void main()
{
	int a, b, c;
	
	//Enter data
	cout << "Enter three-digit number : " << endl; 
	cin >> a;

	//Calculations

	b = a % 10;
	c = (a % 100) / 10;

	//Output data 
	
	cout << "Result = " << b << c << endl;
	
}