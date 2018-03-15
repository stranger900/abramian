#include<iostream>

using namespace std;

void main()
{
	double x, f;

	//Enter data
	cout << "Enter number X: " << endl;
	cin >> x;
	
	//Calculation and Output

	if (x <= 0) {
		f = -x;
	}
	else if (x > 0 && x < 2) {
		f = x*x;
	}
	else if (x >= 2) {
		f = 4;
	}
	else {
		cout << "Something wrong " << endl;
	}
	cout << "f(x) = " << f << endl;
}