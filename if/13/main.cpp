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

	if (a >= b && b >= c)
	{
		cout << "Average = " << b << endl;
	}
	else if (b >= a && a >= c) {
		cout << "Average = " << a << endl;
	}
	else if (a>=c && c>=b) {
		cout << "Average = " << c << endl;
	}
	else if (c >= a && a >= b) {
		cout << "Average = " << a << endl;
	}
	else if (b >= c && c >= a) {
		cout << "Average = " << c << endl;
	}
	else if (c >= b && b >= a) {
		cout << "Average = " << b << endl;
	}
	else {
		cout << "Something wrong " << endl;
	}
	
}