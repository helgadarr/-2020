#include <iostream>
#include <stdlib.h> 
#include <ctime>
using namespace std;

int main() {

    int R[4], a[4][5], n = 4, m = 5, k=0;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int f = 0; f < m; f++) {
            a[i][f] = rand() % 10;
            cout << a[i][f] << "  ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) 
        for (int f = 0; f < m; f++) 
            if (a[i][f] == 0) {
                R[k++] = i;
                break;
            }
    cout << "\n\tnomer ryadka: ";
    for (int i = 0; i < k; i++)
        cout << R[i] +1 << "  ";

    cout << "\n\tryadku: ";
    for (int i = 0; i < k; i++)
        for (int f = 0; f < m; f++)
            cout << a[R[i]][f] << ",";

    cout << "\n\n";
    system("pause");
    return 0;
}