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
		cout << "Min = " << c << endl;
	}
	else if (b >= a && a >= c) {
		cout << "Min = " << c << endl;
	}
	else if (a>=c && c>=b) {
		cout << "Min = " << b << endl;
	}
	else if (c >= a && a >= b) {
		cout << "Min = " << b << endl;
	}
	else if (b >= c && c >= a) {
		cout << "Min = " << a << endl;
	}
	else if (c >= b && b >= a) {
		cout << "Min = " << a << endl;
	}
	else {
		cout << "Something wrong " << endl;
	}
	
}