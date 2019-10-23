#pragma once
#include "pch.h"
#include <string>

using namespace std;

class Contact {
	int numb, min;
	struct {
		string name1;
		string name2;
	} fullname;

	unsigned long long phone;
	struct {
		short day;
		short month;
		short year;
	} Date;
	bool elected;
public:
	Contact();
	Contact( string n1,string n2); // Конструктор инициализации
	Contact( int _numb,string n1,string n2, short d, short m, short y, int _min,bool el); // Констуктор для копирования из файла
	~Contact(); // Деструктор
	bool findname1( string n1); // Найти по звонящему
	bool findname2(string n2);  // Найти по звонящему
	int sorttime();
	bool findletter(char letter); // Имя
	friend ostream&operator<<(ostream& stream, const Contact&); // Вывод
};