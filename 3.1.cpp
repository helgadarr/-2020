#include <iostream>
#include <stdlib.h> 
#include <ctime>
using namespace std;

int main()
{
	int i, j, R[5][4];
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			R[i][j] = rand() % 100;
		}
	}
	cout << "matrix R \n";
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			cout << R[i][j] << "\t";
		cout << endl;

	}

	cout << "\nMatrix R: \n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (R[i][j] % 2 == 0)
				R[i][j] = 0;
			else
				R[i][j] = 1;

			cout << R[i][j] << "\t";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}
