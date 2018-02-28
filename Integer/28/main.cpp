#include<iostream>

using namespace std;

void main()
{
	int a, b, n;

	//Enter data
	cout << "Enter number of year`s day (1-365): " << endl;
	cin >> a;
	cout << "Enter number of week`s day (1-7): " << endl;
	cin >> n;

	//Calculations

	b = (a + (n-1)) % 7;

	//Output data 

	switch (b)
	{
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;

	}
}