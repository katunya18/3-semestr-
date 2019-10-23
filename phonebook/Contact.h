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
	Contact( string n1,string n2); // ����������� �������������
	Contact( int _numb,string n1,string n2, short d, short m, short y, int _min,bool el); // ���������� ��� ����������� �� �����
	~Contact(); // ����������
	bool findname1( string n1); // ����� �� ���������
	bool findname2(string n2);  // ����� �� ���������
	int sorttime();
	bool findletter(char letter); // ���
	friend ostream&operator<<(ostream& stream, const Contact&); // �����
};