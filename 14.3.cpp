#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std;
int main()
{
    char str[80];
    int i, neword;
    setlocale(LC_ALL, "rus");
    printf("Введите строку символов >\n");
    gets_s(str);

    i = 0;
    neword = 1;
    while (str[i])
    {
        if (str[i] == ' ')
            neword = 1;
        else
            if ((str[i] == '.') || (str[i] == ',') || (str[i] == '!') ||
                (str[i] == '?') || (str[i] == ':') || (str[i] == ';'))
            {
                cout << " " << str[i];
               /* printf("%c", str[i]);*/
                neword = 1;
            }
            else
            {
                if (neword && i)
                    cout << " " << str[i];/*
                    printf(" ");
                printf("%c", str[i]);*/
                neword = 0;
            }
        i++;
    }
}