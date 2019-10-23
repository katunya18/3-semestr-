#pragma once
#include "pch.h"
#include "Contact.h"
#include <string>
#include <iostream>

using namespace std;

Contact::Contact() {
	fullname.name1 = fullname.name2= "";
	min=numb = 0;
	Date.day = 0;
	Date.month = 0;
	Date.year = 0;
	elected = false;
}

Contact::Contact( string n1, string n2) {
	fullname.name1 = n1;
	fullname.name2 = n2;
	numb=min = 0;
	Date.day = 0;
	Date.month = 0;
	Date.year = 0;
	elected = false;
}

Contact::Contact(int _numb, string n1, string n2, short d, short m, short y, int _min, bool el) {
	fullname.name1 = n1;
	fullname.name2 = n2;
	numb = _numb;
	Date.day = d;
	Date.month = m;
	Date.year = y;
	min = _min;
	elected = el;
}

Contact::~Contact() {
	fullname.name1=fullname.name2 = "";
	numb =min= 0;
	Date.day = 0;
	Date.month = 0;
	Date.year = 0;
	elected = false;
}

bool Contact::findname1(string n) {
	return  fullname.name1 == n ;
}
bool Contact::findname2(string n) {
	return  fullname.name2 == n;
}

bool Contact::findletter(char letter) {
	return fullname.name1[0] == letter;
}
int Contact::sorttime() 
{
	return min;
}

ostream &operator<<(ostream& stream, const Contact& C) {
	stream << C.numb << " " << C.fullname.name1 << " " << C.fullname.name2 
		<<  "," << C.Date.day << ":" << C.Date.month << ":" << C.Date.year << ","
		<< C.min <<C.elected;
	return stream;
}