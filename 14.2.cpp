#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#define SA 500
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    string  s, s1, s2, s3, s4, sl;
    char s[SA];
    int i;

    cout << "Введите строку s";
    cin >> s;
    s1 = 'e';
    s2 = 'f';
    s3 = 'g';
    s4 = 'q';
    sl = '';
    clrscr();
    for (i = 0; i < SA; i++) {
        if (s[i] = ' ') {
            sl += s[i];
        }
        else {
            if (sl[0] = s1 && sl[0] = s2 && sl[0] = s3 && sl[0] = s4)
                cout << sl << ' ' << endl;
        }
    }
    return 0;
}