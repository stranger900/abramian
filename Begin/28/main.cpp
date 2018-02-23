#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b, c;
	
	
	//Enter data
	cout << "Enter A: " << endl; 
	cin >> a;
	
	
	//Output data a2
	b = a * a;
	cout << "A2 = " << b << endl;

	//Output data a3
	c = a * a * a;
	cout << "A3 = " << c << endl;

	//Output data a5
	a = b * c;
	cout << "A5 = " << a << endl;

	//Output data a10
	b = a * a;
	cout << "A10 = " << b << endl;

	//Output data a15
	c = a * b;
	cout << "A15 = " << c << endl;
}