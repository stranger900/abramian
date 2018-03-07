#include<iostream>

using namespace std;

void main()
{
	int a, b, c;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;
	cout << "Enter number B: " << endl;
	cin >> b;
	cout << "Enter number C: " << endl;
	cin >> c;

	//Calculation and Output

	if (a <= b && b <= c) {
		a *= 2;
		b *= 2;
		c *= 2;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "C = " << c << endl;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "C = " << c << endl;
	}
}