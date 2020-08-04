#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <ctime>
using namespace std;

int main()
{
    int sa, sum;
    size_t n;
    sa = 0;
    sum = 0;
    cout << "n= ";
    cin >> n;
    int** A = new int* [n];
        for (int i = 0; i < n; i++)
            A[i] = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 20-5;
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) 
            sum += A[i][j];
    }      
    sa = sum / (n*n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] < sa)
                cout <<A[i][j]<<"\t";
        }
    }
    delete[] A;
    system("pause");
    return 0;
}
