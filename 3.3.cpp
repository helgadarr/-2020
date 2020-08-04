#include <iostream>
#include <stdlib.h> 
#include <ctime>
using namespace std;

int main()
{
	int i, j, R[5][5];
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			R[i][j] = rand() % 100;
		}
	}
	cout << "matrix R \n";
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			cout << R[i][j] << "\t";
		cout << endl;
	}
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i+j>=3+1)
                cout << R[i][j] << " ";
        }
    }
    for (int i = 0; i < 5; i++)
    {
        delete[] R[i];
    }
    delete[] R;
    /*system("pause");*/
    return 0;
}
