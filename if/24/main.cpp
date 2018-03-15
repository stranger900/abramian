#include<iostream>

using namespace std;

void main()
{
	int x, f;

	//Enter data
	cout << "Enter number X: " << endl;
	cin >> x;
	
	//Calculation and Output

	if (x > 0) {
		f = 2 * sin(x);
	}
	else if (x <= 0) {
		f = 6 - x;
	}
	else {
		cout << "Something wrong" << endl;
	}
	cout << "f(x) = " << f << endl;
}