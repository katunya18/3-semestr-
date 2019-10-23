#include "pch.h"
#include "PhoneBook.h"
#include "Contact.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

Phonebook::Phonebook() {
	size = 0;
	// Считаем кол-во строк в файле
	ifstream f;
	f.open("Phone.txt");
	string s;
	while (!f.eof()) {
		getline(f, s);
		size++;
	} size--; // Вычитаем header
	f.close();

	book = new Contact[size];

	f.open("Phone.txt");
	int index = 0;
	while (!f.eof()) {
		string str,buffer[8];
		getline(f, str);
		int i = 0, j = 0;
		while (i < str.length()) {
			if (str[i] != ',') {
				if (str[i] == ':') {
					i++;
					j++;
				}
				buffer[j] += str[i];
			}
			else {
				j++;
			}
			i++;
		}
		bool res = false;
		if (buffer[7] == "1") {
			res = true;
		}		
		index++;
	}
	f.close();
};

Phonebook::~Phonebook() {
	ofstream fout;
	fout.open("Phone.txt");
	int i = 0;
	while (i < size) {
		if (i == size - 1) {
			fout << book[i];
		}
		else {
			fout << book[i] << endl;
		}
		i++;
	}
	fout.close();
	delete[] book;
}
void Phonebook::show() {

	for (int i = 0; i < size; i++) 
	{
		cout << book[i] << endl;
	}
}
void Phonebook::DelCont() {
	string  n1;
	cout << "Введите имя контакта: ";
	cin >> n1;
	int i = 0;
	while (i < size) {
		if (book[i].findname1(n1)) {
			for (int j = i; j < size - 1; j++) {
				book[j] = book[j + 1];
			}
			size--;
			break;
		}
		i++;
	}
	if (i == size) {
		cout << "Не найдено.\n";
	}
	else {
		cout << "Удалено\n";
	}
}
void Phonebook::findname1() {
	string  n;

	cout << "Введите имя человека, которому звонили: ";
	cin >> n;
	int i = 0;
	while (i < size) {
		if (book[i].findname1(n)) {
			cout << book[i] << endl;
			break;
		}
		i++;
	}
	if (i == size) {
		cout << "Контакт не найден.\n";
	}
}
void Phonebook::findname2() {
	string  n;

	cout << "Введите имя челоека, который звонил: ";
	cin >> n;
	int i = 0;
	while (i < size) {
		if (book[i].findname2(n)) {
			cout << book[i] << endl;
			break;
		}
		i++;
	}
	if (i == size) {
		cout << "Контакт не найден.\n";
	}
}
void Phonebook::addcontact() {
	string  n1, n2;

	cout << "Введите имена: ";
	cin >> n1 >> n2;
	Contact* res;
	res = new Contact[size++];
	for (int i = 0; i < size; i++) {
		res[i] = book[i];
	}
	res[size - 1] = Contact(n1, n2);
	delete[] book;

	size++;
	book = new Contact[size];
	for (int i = 0; i < size; i++) {
		book[i] = res[i];
	}
	delete[] res;
	cout << "Контакт успешно создан.\n";
}

