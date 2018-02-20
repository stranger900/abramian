#include<iostream>

using namespace std;

void main()
{
	double r, L, s;
	const double pi = 3.14;
	//Vvod

	cout << "Enter radius size: " << endl;
	cin >> r;
		
	//Vyvod
	
	cout << "the circle's length is equal :  L = " << 2 * pi * r << endl;
	cout << "the area is equal : " << (r * r) * pi << endl;
}