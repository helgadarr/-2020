#include <iostream>
using namespace std;
struct balls{
    int missed;
    int goals;
};
struct fk{
    string name;
    balls score;
};
void show(fk object) {
    cout << "Название команды - " << object.name << endl;
    cout << "Количество забитых голов - " << object.score.goals << endl;
    cout << "Количество пропущеных голов - " << object.score.missed << endl;
    cout << "\n" << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    fk fc[16];
    
    fc[0].name = "Ювентус";
    fc[0].score.goals = 2;
    fc[0].score.missed = 3;
    
    show(fc[0]);

    fc[1].name = "Манчестер Юнайтед";
    fc[1].score.goals = 8;
    fc[1].score.missed = 8;

    show(fc[1]);

    fc[2].name = "Реал Мадрид";
    fc[2].score.goals = 5;
    fc[2].score.missed = 6;

    show(fc[2]);

    fc[3].name = "Барселона";
    fc[3].score.goals = 2;
    fc[3].score.missed = 3;

    show(fc[3]);

    fc[4].name = "Челси";
    fc[4].score.goals = 1;
    fc[4].score.missed = 5;

    show(fc[4]);

    fc[5].name = "Милан";
    fc[5].score.goals = 7;
    fc[5].score.missed = 6;

    show(fc[5]);

    fc[6].name = "Ливерпуль";
    fc[6].score.goals = 3;
    fc[6].score.missed = 4;

    show(fc[6]);

    fc[7].name = "Арсенал";
    fc[7].score.goals = 16;
    fc[7].score.missed = 8;

    show(fc[7]);

    fc[8].name = "Бавария";
    fc[8].score.goals = 1;
    fc[8].score.missed = 2;

    show(fc[8]);

    fc[9].name = "ЦСК Москва";
    fc[9].score.goals = 3;
    fc[9].score.missed = 2;

    show(fc[9]);

    fc[10].name = "Шахтёр";
    fc[10].score.goals = 6;
    fc[10].score.missed = 6;

    show(fc[10]);

    fc[11].name = "Манчестер Сити";
    fc[11].score.goals = 1;
    fc[11].score.missed = 3;

    show(fc[11]);

    fc[12].name = "Зенит";
    fc[12].score.goals = 15;
    fc[12].score.missed = 10;

    show(fc[12]);

    fc[13].name = "Динамо Киев";
    fc[13].score.goals = 2;
    fc[13].score.missed = 4;

    show(fc[13]);

    fc[14].name = "Спартак";
    fc[14].score.goals = 1;
    fc[14].score.missed = 5;

    show(fc[14]);

    fc[15].name = "ФК Рома";
    fc[15].score.goals = 8;
    fc[15].score.missed = 6;

    show(fc[15]);
    cout << "2) Ни в одной игре не было ничьи, потому что это кубок)" << endl;
    
}

