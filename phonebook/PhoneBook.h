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
	void show();       // �������� ������
	void DelCont();    //������� �������
	void addcontact(); // �������� �������
	void findname1();  // ����� �� ������� ����� 
	void findname2();  // ����� �� ������� ����� 
	//void sorttime(); // ���������� �� �������
};