#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, r;
	
	//Vvod

	cout << "Enter length: " << endl;
	cin >> a;
	
	//Vyvod
	r = a / (2 * 3.14);
	cout << "R =  " << r << endl;
	cout << "S =  " << 3.14 * (r*r) << endl;
	
}