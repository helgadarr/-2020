#include <iostream>
#include <ctime>
using namespace std;
#define Z 11

int main()
{
    int mas[Z],i,z;
    printf("Z = ");
    scanf_s("%d", &z);
    srand(time(NULL));
    for (i = 0; i <= z; i++) {
        mas[i] = rand() % 100;
        printf("%d\n", mas[i]);
    }
    cout << "Input:\n";
    for (int i = 0; i < z; i++) cout << "  " << mas[i];

    for (int i = 1; i < z; i += 2)
    {
        int t = mas[i - 1];
        mas[i - 1] = mas[i];
        mas[i] = t;
    }

    cout << "\n\nOutput:\n";
    for (int i = 0; i < z; i++) cout << "  " << mas[i];
    cout << endl;

    system("pause");
    return 0;
}