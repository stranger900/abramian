#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, r;
	
	//Vvod

	cout << "Enter area: " << endl;
	cin >> a;
	
	//Vyvod
	r = sqrt(a/3.14);
	cout << "D =  " << 2*r << endl;
	cout << "L =  " << 3.14 * (2*r) << endl;
	
}