#include<iostream>

using namespace std;

void main()
{
	int a, b, c, d;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;
	cout << "Enter number B: " << endl;
	cin >> b;
	cout << "Enter number C: " << endl;
	cin >> c;

	//Calculation

	d = b*b - 4 * a*c;

	//Output

	cout << (d>0) << endl;
		
}