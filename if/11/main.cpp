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
	
	//Calculation and Output

	if (a != b)
	{
		if (a > b)
		{
			b = a;
		}
		else
		{
			a = b;
		}
		cout << "A = " << a << " B = " << b << endl;
	}
	else if (a==b)
	{
		cout << "A is equal B " << endl;
		a = 0;
		b = 0;
		cout << "A = " << a << " B = " << b << endl;

	}
	else
	{
		cout << "Somthing wrong " << endl;
	}
}