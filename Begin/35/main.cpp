#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double v, u, t1, t2, s;
	
	
	//Enter data
	cout << "Enter V: " << endl; 
	cin >> v;
	cout << "Enter U: " << endl;
	cin >> u;
	cout << "Enter T1: " << endl;
	cin >> t1;
	cout << "Enter T2: " << endl;
	cin >> t2;
	
	//Output data 
	
	cout << "S = " << (t1 * v) + (t2*(v-u)) << endl;
	
}