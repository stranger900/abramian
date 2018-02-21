#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b;
	
	//Vvod

	cout << "Enter 1 radius: " << endl;
	cin >> a;
	cout << "Enter 2 radius: " << endl;
	cin >> b;

	//Vyvod
	
	cout << "s1 =  " << a*a*3.14 << endl;
	cout << "s2 =  " << b*b*3.14 << endl;
	cout << "s3 =  " << ((a*a)*3.14) - ((b*b)*3.14) << endl;

}