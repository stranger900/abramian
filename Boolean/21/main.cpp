#include<iostream>

using namespace std;

void main()
{
	int a;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;

	//Calculation

	int x = 0;
	int	y = 0;
	int	z = 0;
	x = a / 100;
	y = (a % 100) / 10;
	z = a % 10;

	//Output

	cout << ((x<y) && (y<z)) << endl;
		
}