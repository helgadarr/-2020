#include<iostream>
#include <math.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, iter = 0, sum = 0, min1;
	srand(time(NULL));
	cout << "n= ";
	cin >> n;
	int* a = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10000;
		cout << a[i] << "  ";
	}
	min1 = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > 1000 && a[i] < 5000) {
			iter++;
			sum += a[i];
		}
	}
	for (int i = 0; i < n; i++)
		if (min1 > a[i]) min1 = a[i];

	cout << "\nкiлькiсть " << iter << endl;
	cout << "сума " << sum << endl;
	cout << "min " << min1 << endl;

	system("pause");
}