#include <iostream>
#include <cstdlib>
#define Z 10
#define Y 10
using namespace std;
int main()
{
    int z[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int y[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a[20];
    const int size = 20;
    int k = 0;
    for (int i = 0; i < Z; i++){
        cout << z[i] << "" <<endl;}
    for (int i = 0; i < Y; i++) {
        cout  << y[i] << "" << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        a[k++] = z[i];
        a[k++] = y[i];
    }

    int temp; 
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
