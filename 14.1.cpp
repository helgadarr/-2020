#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    char s[100], x[2];
    int i = 0, p, sum = 0, db = 1, k = 0;
    bool m = true;

    cout << "Введите строку "; 
    gets_s(s);
    p = strlen(s); x[0] = '\0';

    while (s[i] != '\0')

    {
        x[0] = s[i];
        x[1] = '\0';
        if (s[i] >= '0' && s[i] <= '9') {
            sum += atoi(x);
            db *= atoi(x);
        }
        x[0] = '\0';


        i++;
    }

    cout <<"Сума чисел = "<< sum << endl;
    cout <<"Добуток чисел = "<< db << endl;
    return 0;
}