#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b, c;
	
	//Enter data
	cout << "Enter A (A != 0 ) : " << endl; 
	cin >> a;
	cout << "Enter B: " << endl;
	cin >> b;
	cout << "Enter C: " << endl;
	cin >> c;

	//Calculation
	
	double d = b * b - 4 * a * c;

	//Output data 
	
	cout << "X1 = " << (-b + sqrt(d)) / (2 * a) << endl;
	cout << "X2 = " << (-b - sqrt(d)) / (2 * a) << endl;
}