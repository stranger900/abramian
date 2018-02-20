#include<iostream>

using namespace std;

void main()
{
	int a, b, c;

	//Vvod

	cout << "Enter 1 side size: " << endl;
	cin >> a;
	cout << "Enter 2 side size: " << endl;
	cin >> b;
	cout << "Enter 3 side size: " << endl;
	cin >> c;
	
	//Vyvod
	
	cout << "the volumes is equal : " << a * b * c << endl;
	cout << "the area is equal : " << (a * b + b * c + a * c)* 2 << endl;
}