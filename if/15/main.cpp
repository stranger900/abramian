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
		cout << "Sum = " << a+b << endl;
		
	}
	else if (b >= a && a >= c) {
		cout << "Sum = " << b+a << endl;
		
	}
	else if (a>=c && c>=b) {
		cout << "Sum = " << a+c << endl;
		
	}
	else if (c >= a && a >= b) {
		cout << "Sum = " << c+a << endl;
		
	}
	else if (b >= c && c >= a) {
		cout << "Sum = " << b+c << endl;
		
	}
	else if (c >= b && b >= a) {
		cout << "Sum = " << c+b << endl;
		
	}
	else {
		cout << "Something wrong " << endl;
	}
	
}