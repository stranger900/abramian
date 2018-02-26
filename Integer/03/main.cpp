#include<iostream>

using namespace std;

void main()
{
	int a;
	
	//Enter data
	cout << "Enter the file size in bytes : " << endl; 
	cin >> a;
		
	//Output data 
	
	cout << "The file size in kilobyte = " << a/1024 << " kb." << endl;
	
}