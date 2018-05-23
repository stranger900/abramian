# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

int DigitCount(int k);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(5);
	int count = 0, k, n;
	srand(time(NULL));


	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand();
	}

	
	for(auto index : arr) {
		cout << index << "\t ";
		cout << DigitCount(index) << endl;
	}
	cout << endl;	
	return 0;
}

int DigitCount(int k)
{
	int counter = 0;
	while (k > 0) {
		k = k / 10;
		counter++;
	}
	return counter;
}