#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    int D;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
        D = (b * b) - (4 * a * c);
        if (D > 0) {
            int x1, x2;
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << "1) Два коренi "<<"\n";
        }
        else {
            if (D == 0) {
                cout << "1) Один корiнь" << "\n";
            }
            else
                cout << "1) Коренiв нема" << "\n";
        }

        D = (a * a) - (4 * b * c);
        if (D > 0) {
            int x1, x2;
            x1 = (-a + sqrt(D)) / (2 * b);
            x2 = (-a - sqrt(D)) / (2 * b);
            cout << "2) Два коренi " << "\n";
        }
        else {
            if (D == 0) {
                cout << "2) Один корiнь" << "\n";
            }
            else
                cout << "2) Коренiв нема" << "\n";
        }

        D = (b * b) - (4 * a * c);
        if (D > 0) {
            int x1, x2;
            x1 = (-b + sqrt(D)) / (2 * c);
            x2 = (-b - sqrt(D)) / (2 * c);
            cout << "3) Два коренi " << "\n";
        }
        else {
            if (D == 0) {
                cout << "3) Один корiнь" << "\n";
            }
            else
                cout << "3) Коренiв нема" << "\n";
        }

    system("pause");
    return 0;
}

