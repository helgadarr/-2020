#include <iostream>
using namespace std;

struct living {
    string street;
    int build;
    int apartment;
};
struct vote
{
    string FIO;
    int passport;
    int birthday;
    string voted;
    living adress;

};
void show(vote object) 
{
    cout << "Прiзвище, iм'я, по батьковi виборця - " << object.FIO << endl;
    cout << "Домашня адреса(вулиця, будинок, квартира) - " << object.adress.street<<"  "<< object.adress.build<<"  "<< object.adress.apartment << endl;
    cout << "Серiя паспорта - " << object.passport << endl;
    cout << "Рiк народження - " << object.birthday << endl;
    cout << "Вiдмiтка про те, проголосував чи нi - " << object.voted << endl;
    cout << "\n" << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");

    vote human1;
    
    human1.FIO = "Давидов Сергiй Васильович";
    human1.adress.street = "вулиця Зегеля";
    human1.adress.build = 23;
    human1.adress.apartment = 122;
    human1.passport = 154862598;
    human1.birthday = 1990;
    human1.voted = "Так";

    show(human1);

    vote human2;

    human2.FIO = "Мамонтов Аввакуум Юлiанович";
    human2.adress.street = "вулиця Тараса Шевченка";
    human2.adress.build = 3;
    human2.adress.apartment = 42;
    human2.passport = 546785213;
    human2.birthday = 1968;
    human2.voted = "Нi";

    show(human2);

    vote human3;
    human3.FIO = "Орлов Влас Митрофанович";
    human3.adress.street = "вулиця Зегеля";
    human3.adress.build = 15;
    human3.adress.apartment = 14;
    human3.passport = 254685935;
    human3.birthday = 1985;
    human3.voted = "Так";

    show(human3); 

    int year[3], k, q, vidsotok, klkst;
    year[0] = 1990;
    year[1] = 1968;
    year[2] = 1985;
    string votes[3] = { "yes", "no", "yes" },
        street[3] = { "вулиця Зегеля", "вулиця Тараса Шевченка", "вулиця Зегеля" };
    k = 0;
    for (int i = 0; i < 3; i++) {
        if (2020 - year[i] < 35)
        for (int j = 0; j < 3; j++) {
            if (votes[j] == "yes") {
                k++;
                vidsotok = (k * 100) / 3;
            }
        }
    }
    q = 0;
    for (int j = 0; j < 3; j++) {
        if (votes[j] == "yes") 
            
            for (int f = 0; f < 3; f++) {
                if (street[f] == "вулиця Зегеля")
                    q++;
                klkst = q / 2;
            }
        
    }
    cout << "Вiдсоток виборцiв = " << vidsotok << "%" << endl;
    cout << "Кiлькiсть виборцiв = " << klkst << endl;
    
}
