#include<iostream>

using namespace std;

void main()
{
	int a, b;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;
	cout << "Enter number B: " << endl;
	cin >> b;
	
	//Output

	if (a > b)
	{
		cout << a << " " << b << endl;
		cout <<"Bigger number is: " << a << endl;
		cout << "Less number is: " << b << endl;
	}
	else if (a==b)
	{
		cout << "A is equal B " << endl;
	}
	else
	{
		cout << b << " " << a << endl;
		cout << "Less number is: " << b << endl;
		cout << "Bigger number is: " << a << endl;
	}
}