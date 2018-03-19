#include<iostream>
#include<string>

using namespace std;

void main()
{
	int a;

	//Enter data
	cout << "Enter number: " << endl;
	cin >> a;

	//Calculation and Output

	if (a < 0) {
		cout << "Negative";
	}
	else if(a>0){
		cout << "Positive";
	}else{
		cout << "Zero";
	}
	if (a > 9 && a < 100) {
		cout << " two-digit";
	}
	if (a > 99 && a < 1000) {
		cout << " three-digit";
	}
	if (a == 0){
		cout << " number" << endl;
	}
	else if (a % 2 == 0) {
		cout << " even number " << endl;
	}
	else if (a % 2 != 0) {
		cout << " odd number " << endl;
	}
	else {
		cout << " Something wrong" << endl;
	}
}