# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

bool IsPowerN(int k, int n);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(10);
	int count = 0, k, n;
	srand(time(NULL));

	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand() % 150;
	}

	
	for(auto index : arr) {
		cout << index << " ";
		if (index > 0) {
			if (IsPowerN(index, n)) {
				count++;
			}
		}
	}
	cout << endl;
	cout << "Кількість степеней числа N в наборі = " << count << endl;
	return 0;
}

bool IsPowerN(int k, int n)
{
	int i = n;
	while (i < k) {
		i *= n;
	}
	return i == k;
}