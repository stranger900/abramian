#include<iostream>

using namespace std;

void main()
{
	int a, b, c, d;

	//Enter data
	cout << "Enter number 1: " << endl;
	cin >> a;
	cout << "Enter number 2: " << endl;
	cin >> b;
	cout << "Enter number 3: " << endl;
	cin >> c;
	cout << "Enter number 4: " << endl;
	cin >> d;

	//Calculation and Output

	if (a==b && a!=c && a==d) {
		cout << "Number 3 is different" << endl;
	}
	else if (b == c && c==d && b!=a) {
		cout << "Number 1 is different" << endl;
	}
	else if (a == c && a==d && a != b) {
		cout << "Number 2 is different" << endl;
	}
	else if (a == c && a == b && a != d) {
		cout << "Number 4 is different" << endl;
	}
	else {
		cout << "Something wrong " << endl;
		cout << "Probably you entered wrong numbers" << endl;
	}
}