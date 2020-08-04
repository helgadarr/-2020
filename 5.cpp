#include <iostream>
#include <stdlib.h> 
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int  n, sum=0, iter=0;
    cout << "n=";
    cin >> n;
    int* a = (int*)calloc(n, sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << "  ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) 
        if (a[i] % 5 == 0)
            iter++;
    a = (int*) realloc(a, (n + iter) * sizeof(int));
   
    for (int i = 0; i < n; i++){
        if (a[i] % 5 == 0) {
            for (int j = n; j > i; j--)
                a[j] = a[j - 1];
            a[i + 1] = sum;
            n+=1;
        }
        else
            sum += a[i];
     }
    for (int i = 0; i < n; i++)
        cout << a[i] << "  ";

    free (a);
    system("pause");
    return 0;
}

