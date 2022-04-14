#include "CListF.h"

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
void CListF::Display()
{
	STACK* p;
	p = head;
	while (p != NULL)
	{
		std::cout << p->info << " -> ";
		p = p->next;
	}
	std::cout << "NULL" << std::endl;
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

std::ostream& operator<< (std::ostream& out, const CListF& listf)
{
	out << "{ ";
	CListF q = listf;
	while (q.head->next)
	{
		out << q.head->info << "; ";
		q.head = q.head->next;
	}
	out << q.head->info <<" }";
	return out;
}