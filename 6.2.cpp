#include <iostream>
#include <string.h>
#include <locale.h>
#include <string>
#include <stdlib.h> 
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	char fio[50];
	int a = 0;
	cout << "Правильно введите ваше ФИО используя английскую транслитерацию." << endl;
	cin.getline(fio, 50);

	for (int i = 0; i < 50; i++)
	{
		if (fio[i] == 'a' || fio[i] == 'A')
			a++;
	}
	cout << "Ваше ФИО = " << fio << endl;
	cout << "Длина рядка = " << strlen(fio) << endl;
	cout << "Количество букв A/a = " << a << endl;
	cout << endl;

	string name;
	string res;
	cout << "Введите еще раз ваше имя"<<endl;
	cin >> name;
	for (int i = 0; i < name.size(); i++)
	{
		res += name[i];
		if (name[i] == 'i')
			res += 'i';
	}
	cout << res<<endl;

	system("pause");
	return 0;
}