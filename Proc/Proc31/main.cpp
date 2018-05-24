# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

bool IsPalindrom(int k);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(10);
	int count = 0, k, n;
	srand(time(NULL));


	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand();
	}

	
	for(auto index : arr) {
		cout << index << "\t ";
		cout << IsPalindrom(index)<< endl;
	}
	cout << endl;	
	return 0;
}

bool IsPalindrom(int k)
{
	int counter = k, newNumber = 0;
	while (counter>0) {
		newNumber = newNumber * 10 + counter % 10;
		counter /= 10;
	}
	if (newNumber == k) {
		return true;
	}
	return false;
}