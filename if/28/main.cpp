#include<iostream>

using namespace std;

void main()
{
	int numberOfYear;

	//Enter data
	cout << "Enter number of year: " << endl;
	cin >> numberOfYear;

	//Calculation and Output

	if (numberOfYear % 4== 0 ^ (numberOfYear % 100 == 0 && numberOfYear % 400 != 0)) {
		cout << "366" << endl;
	}
	else {
		cout << "365" << endl;
	}
}