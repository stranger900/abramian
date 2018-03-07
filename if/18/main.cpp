#include<iostream>

using namespace std;

void main()
{
	int a, b, c;

	//Enter data
	cout << "Enter number 1: " << endl;
	cin >> a;
	cout << "Enter number 2: " << endl;
	cin >> b;
	cout << "Enter number 3: " << endl;
	cin >> c;

	//Calculation and Output

	if (a==b && a!=c) {
		cout << "Number 3 is different" << endl;
	}
	else if (b == c && b != a) {
		cout << "Number 1 is different" << endl;
	}
	else if (a == c && a != b) {
		cout << "Number 2 is different" << endl;
	}
	else {
		cout << "Something wrong " << endl;
	}
}