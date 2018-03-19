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
		case 1: {
			cout << "January, 31 days" << endl;
			break;
		}
		case 2: {
			cout << "February, 28 days" << endl;
			break;
		}
		case 3: {
			cout << "March, 31 days" << endl;
			break;
		}
		case 4: {
			cout << "April, 30 days" << endl;
			break;
		}
		case 5: {
			cout << "May, 31 days" << endl;
			break;
		}
		case 6: {
			cout << "June, 30 days" << endl;
			break;
		}
		case 7: {
			cout << "July, 31 days" << endl;
			break;
		}
		case 8: {
			cout << "August, 31 days" << endl;
			break;
		}
		case 9: {
			cout << "September, 30 days" << endl;
			break;
		}
		case 10: {
			cout << "October, 31 days" << endl;
			break;
		}
		case 11: {
			cout << "November, 30 days" << endl;
			break;
		}
		case 12: {
			cout << "December, 31 days" << endl;
			break;
		}
/*   ******************************* SECOND VARIANT **********************************************************
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:{
			cout << "31 days" << endl;
			break;
		}
		case 2:{
			cout << "28 days" << endl;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:{
			cout << "30 days" << endl;
			break;
		}
	*********************************************************************************************************	
*/ 
		default: {
			cout << "Wrong number" << endl;
		}
	}
}