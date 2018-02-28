#include<iostream>

using namespace std;

void main()
{
	int a;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;

	//Output

	cout << (a>99 && a<1000 && a%2!=0) << endl;
		
}