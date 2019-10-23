#pragma once
#include"pch.h"
#include "PhoneBook.h"
#include "Contact.h"
#include <iostream>
#include <fstream>

using namespace std;


int main() {
	setlocale(LC_CTYPE, "rus");
	Phonebook ph;
	cout << "=========================\n"
		"Меню\n"
		"1 - Выдать все контакты\n"
		"2 - Удалить контакт\n"
		"3 - Создать новый контакт\n"
		"7 - Найти данные, которому звонили\n"
		"8 - Найти данные, который звонил\n"
		"0 - Выход\n"

		"4 - Найти контакт по телефону\n"
		"5 -   Удалить контакт из списка избранных\n "
		
		"8 - "
		"9 - Выдать все избранные контакты\n"
		;
	for (;;) {
		bool exit = false;
		int point = 0;
		cout << ">>> ";
		cin >> point;
		switch (point) {
		case 1: ph.show(); break;
		case 2: ph.DelCont(); break;
		case 3: ph.addcontact (); break;

		//case 4: ph.findphone(); break;
		//case 5: ph.; break;
		//case 6: ph.sorttime(); ph.show(); break;

		case 7: ph.findname1(); break;
		case 8: ph.findname2(); break;
		case 0: exit = true; break;
		default: cout << "Erorr." << endl;

		if (exit) break;		
		}
	}
	return 0;
}
