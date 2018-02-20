#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b;
	
	//Vvod

	cout << "Enter 1 side of triangle: " << endl;
	cin >> a;
	cout << "Enter 2 side of triangle: " << endl;
	cin >> b;

	//Vyvod
	double c = sqrt(a*a + b*b);
	cout << "The hypotenuse of triangle is equal: " << c << endl;
	cout << "The perimeter of triangle is equal: " << (a + b + c) << endl;

}