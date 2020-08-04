//#include <stdafx.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	ifstream F;
	char n;
	string txt = "D:\\Plotnikova\\Плотникова О.О\\практика\\13\\1.txt";
	F.open("D:\\Plotnikova\\Плотникова О.О\\практика\\13\\1.txt");

	if (F.is_open())
	{
		cout << "Файл открыт" << endl;
		while (F.get(n))
		
			cout << n;
		}
	else {
		cout << "Ошибка открытия файла" << endl;
		_getch();
	}
	char s[1000];
	F.getline(s, 1000);
	cout << s << endl;
	int k = 0;
	char sep[15] = " ,.!/";
	char *nexttoken;
	
	
		char* ptr_str = strtok_s(s, sep, &nexttoken);
	

	while (ptr_str != NULL) {
		if (ptr_str[0] == 's')
			k++;

		ptr_str = strtok_s(NULL, sep, &nexttoken);
		
	}
	F.close();
	cout << "\nКоличество слов = " << k <<endl;
	_getch();
	system("pause");
	return 0;
}