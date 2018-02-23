#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b;
	
	
	//Enter data
	cout << "Enter A: " << endl; 
	cin >> a;
	
	
	//Output data a2
	b = a * a;
	cout << "A2 = " << b << endl;

	//Output data a4
	a = b*b;
	cout << "A4 = " << a << endl;

	//Output data a8
	b = a * a;
	cout << "A8 = " << b << endl;
}