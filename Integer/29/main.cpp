#include<iostream>

using namespace std;

void main()
{
	int a, b, c, sp, sk;

	//Enter data
	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter B: " << endl;
	cin >> b;
	cout << "Enter C: " << endl;
	cin >> c;

	//Calculations

	sp = a * b;
	sk = c*c;

	//Output data 

	cout << "Count = " << sp / sk << endl;
	cout << "Free area = " << sp%sk << endl;
}