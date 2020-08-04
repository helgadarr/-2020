#include <iostream>
#include <ctime>

const int N = 20;
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int total;
    struct Men
    {
        int sex;
        int weight;
    } x[N];
    srand(time(NULL));
    cout << "Введите информацию о людях " << "\n";
    cout << "0-мужчина, 1- женщина" << "\n";
    for (int i = 0; i < N; i++)
    {

        cout << "Человек #" << i + 1 << ":" <<endl;
        x[i].sex = rand() % 2;
        cout << "Пол: "<<x[i].sex<<"  ";
        
        x[i].weight = rand() % 100;
        cout << "Вес: "<<x[i].weight<<"\n";
    }
    total = 0;
    for (int i = 0; i < N; i++)
    {
        if (x[i].sex == 0)
            total += x[i].weight;
    }
    cout << "Вес всех мужчин: " << total << "\n";
    system("pause");
    return 0;
}