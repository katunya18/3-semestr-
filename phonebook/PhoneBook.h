#include "pch.h"
#include <vector>
#include "Contact.h"
using namespace std;

class Phonebook {
	Contact *book;
	int size;
public:
	Phonebook();
	~Phonebook();
	void show();       // показать данные
	void DelCont();    //удалить контакт
	void addcontact(); // добавить контакт
	void findname1();  // найти по первому имени 
	void findname2();  // найти по второму имени 
	//void sorttime(); // сортировка по времени
};