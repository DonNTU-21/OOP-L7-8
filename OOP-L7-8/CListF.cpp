#include "CListF.h"
#include <conio.h>


CListF::CListF()
{
	head = NULL;
}
CListF::CListF(int n)
{
	int t;
	for (int i = 0; i < n; i++)
	{
		std::cout << "¬ведите значение: ";
		std::cin >> t;
		this->AddItem(t);
	}
}


CListF::~CListF()
{
}
void CListF::AddItem(int s)
{
	STACK* newItem = new STACK;
	newItem->info = s;
	if (head == NULL)
	{
		head = newItem;
		head->next = NULL;
	}
	else
	{
		newItem->next = head;
		head = newItem;
	}
}
const void CListF::Display()
{
	STACK* p;
	p = head;
	while (p != NULL)
	{
		std::cout << p->info << " -> ";
		p = p->next;
	}
	std::cout << "NULL";
}

void CListF::RemoveEveryN(int n)
{
	STACK* c = head;
	STACK* p1;
	int i = 0;
	while (c)
	{
		if (i == n)
		{
			p1 = c;
			c = c->next;
			delete p1;
		}
		c = c->next;
		i++;
	}
	
}

std::ostream& operator<< (std::ostream& out, const CListF& list)
{
	out << "{ ";
	CListF listf = list;
	while (listf.head->next)
	{
		out << listf.head->info << "; ";
		listf.head = listf.head->next;
	}
	out << listf.head->info << " }";
	return out;
}

std::istream& operator>>(std::istream& in, CListF& listf)
{
	int key, value;
	cout << "¬вод списка" << endl;
	cout << "Eсли ввод списка завершЄн, нажмите Escape" << endl;

	do
	{
		value = ValidateINT();
		cout << "≈щЄ значение? (y/n)";
		do
		{
			key = _getch(); _putch(key); cout << endl;
		} while (key != 'y' && key != 'n');
		listf.AddItem(value);
	} while (key!='n');

	return in;
}

