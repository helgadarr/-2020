#include <iostream>
#include <locale>
#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{

    int minn = 1; int maxn = 20;

    const int i = 5; const int j = 6; const int size = 5;
    int V[i][j], max[size] = { 0 }, num, ctr = 0;
    cout << "massif:" << endl;
    for (int q = 0; q < i; q++) {
        for (int w = 0; w < j; w++) {
            V[q][w] = rand() % (maxn - minn + 1) + minn;
            cout << V[q][w] << "\t";
        }
        cout << endl;
    }
    for (int q = 0; q < i; q++)
    {
        num = V[q][0];
        for (int w = 1; w < j; w++)
        {
            if (num < V[q][w]) {
                max[ctr] = V[q][w];
                num = V[q][w];
            }
            else
                max[ctr] = num;
        }
        ctr++;
    }
    cout << "max`s elements of rows:\n";
    for (int w = 0; w < size; w++)
        cout << max[w] << "\t";
    _getch();
    return 0;
}