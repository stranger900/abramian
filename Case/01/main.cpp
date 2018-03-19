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

	switch (a) {
		case 1:
		{
			cout << "Monday" << endl;
			break;
		}
		case 2: {
			cout << "Tuesday" << endl;
			break;
		}
		case 3: {
			cout << "Wednesday" << endl;
			break;
		}
		case 4: {
			cout << "Thursday" << endl;
			break;
		}
		case 5: {
			cout << "Friday" << endl;
			break;
		}
		case 6: {
			cout << "Saturday" << endl;
			break;
		}
		case 7: {
			cout << "Sunday" << endl;
			break;
		}

	}
}