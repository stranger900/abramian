#include<iostream>

using namespace std;

void main()
{
	int x, a, b, c, d;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> x;

	//Calculation

	a = x / 1000;
	b = (x % 1000) / 100;
	c = (x % 100) / 10;
	d = x % 10;

	//Output

	cout << (a==d && b==c) << endl;
		
}