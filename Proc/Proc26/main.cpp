# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

bool IsPower5(int k);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(10);
	int count = 0, k;
	srand(time(NULL));

	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand() % 150;
	}

	
	for(auto index : arr) {
		cout << index << " ";
		if (index > 0) {
			if (IsPower5(index)) {
				count++;
			}
		}
	}
	cout << endl;
	cout << "Кількість степеней числа 5 в наборі = " << count << endl;
	return 0;
}

bool IsPower5(int k)
{
	int i = 1;
	while (i<k) {
		i *= 5;
	}
	return i == k;
}