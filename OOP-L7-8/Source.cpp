#include <iostream>
#include <conio.h>
#include <string>
#include "CList.h"
#include "CListF.h"

using namespace std;

template <class T> void Menu(CList<T>*);

int main()
{
	setlocale(LC_ALL, "rus"); 
	int key;
	CList<int> ints;
	CList<string> stringList;
	CList<CListF> lists;

	do
	{
		system("cls");
		cout << "\t1 - Список <int>" << endl;
		cout << "\t2 - Список <string>" << endl;
		cout << "\t3 - Список списков" << endl;
		key = _getch(); _putch(key);
		system("cls");
		switch (key)
		{
		case '1':
			Menu(&ints);
			break;
		case '2':
			Menu(&stringList);
			break;
		case '3':
			Menu(&lists);
			break;
		}
	} while (key != 27);
}

template <class T>
void Menu(CList<T>* list)
{
	int key;
	int n;
	T* value = new T();
	do
	{
		cout << "\t1 - Добавить элемент" << endl;
		cout << "\t2 - Вывести список" << endl;
		cout << "\t3 - Продублировать каждый N-ый элемент" << endl;
		key = _getch(); _putch(key); cout << endl;
		switch (key)
		{
		case '1':
			cout << "Введите значение: ";
			value = new T();
			cin >> *value;
			list->Add(new T(*value));
			delete value;
			break;
		case '2':
			list->Display();
			cout << endl;
			break;
		case '3':
			cout << "Введите N: ";
			n = ValidateINT();
			list->DuplicateN(n);
			cout << "Список продублирован" << endl;
			break;
		}
	} while (key != 27);
}