# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

double DegToRad(double d);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(10);
	int d;
	srand(time(NULL));


	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand() % 360;
	}

	
	for(auto index : arr) {
		cout << index << "\t ";
		cout << DegToRad(index)<< endl;
	}
	cout << endl;	
	return 0;
}

double DegToRad(double d)
{
	return (d*3.14 / 180);
}