#include<iostream>
#include <math.h>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int  max, a[5][5],dob,max_i,max_j;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			a[i][j] = rand()%20;
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	max_i = 0;
	max_j = 0;
	dob = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			if (a[i][j] > a[max_i][max_j]) {
				max_i = i;
				max_j = j;
			}
	}
			cout << "\niндекс max " << "("<<max_j + 1<<";"<<max_i+1<<")" << endl;
	
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			dob *= a[i][j];
		}
	}
	cout << "\nдобуток " << dob << endl;
	system("pause");
}