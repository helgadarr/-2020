#include <iostream>
#include <stdlib.h> 
#include <locale.h>
#include <ctime>
using namespace std;

int main()
{
    int  n, k, max = 0, a;
    int d[5][6],i,f;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        for ( f = 0; f < 6; f++) {
            d[i][f] = rand() % 210;
        }
    } 
    for (i =0; i < 5; i++) {
        for (f = 0; f < 6; f++) 
            cout << d[i][f] << "\t" ;
        cout << endl;
    }
    
    for (i = 0; i < 5; i++) {
        if (d[2][i] > d[2][max])
            max = i;
    }
     
    cout << "max 3 kandudat " <<max+1<< endl;
    system("pause");
    return 0;
}