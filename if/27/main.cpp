#include<iostream>

using namespace std;

void main()
{
	int x, f;

	//Enter data
	cout << "Enter number X: " << endl;
	cin >> x;
	
	//Calculation and Output

	if (x < 0) {
		f = 0;
	}
	else if ((x+1) % 2 == 0) {
		f = -1;
	}
	else if (x % 2 == 0) {
		f = 1;
	}
	else {
		cout << "Something wrong" << endl;
	}
	cout << "f(x) = " << f << endl;
}