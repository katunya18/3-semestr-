#include "pch.h"
#include <iostream>
#include <cctype>

using namespace std;
typedef char Item;
class Stack
{
private:
	enum { MAX = 20 };   // Вместимость стэка
	Item items[MAX];	 // Массив, для хранения элементов стэка
	int top;			 // Текущее количество элементов стэка
	                    
public:
	Stack() : top(0) {}
	bool isEmpty() const { return top == 0; }		// Возвращает true, если стэк пуст,false - в противном случае
													
	bool isFull() const { return top == MAX; }      // Возвращает true, если стэк полон, false - в противном случае
	bool push(const Item & item);					// Добавляет элемент в стек.
	bool pop(Item & item); 
};
int _tmain()
{
	Stack A, B;
	char ch;
	cout << "Enter AB-sequence: ";
	while ((ch = cin.get()) != '\n')
	{
		if (ch == 'A') A.push(ch);
		else B.push(ch);
	}
	cout << endl << "A - stack" << endl;
	while (!A.isEmpty())
	{
		A.pop(ch);
		cout << ch;
	}
	cout << endl;
	cout << endl << "B - stack" << endl;
	while (!B.isEmpty())
	{
		B.pop(ch);
		cout << ch;
	}
	cout << endl;
	return 0;
}
bool Stack::push(const Item & item)
{
	if (!isFull())
	{
		items[top++] = item;
		return true;
	}
	return false;
}
bool Stack::pop(Item & item)
{
	if (!isEmpty())
	{
		item = items[--top];
		return true;
	}
	return false;
}