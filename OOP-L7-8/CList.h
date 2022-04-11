#pragma once
#include <iostream>
using namespace std;
template <class T>
class CList
{
	struct node
	{
		T* data;
		node* next;
	};
	node* head,
		* tail,
		* p;
	void Clear(void)
	{
		node* c = head;
		while (head)
		{
			c = head;
			head = head->next;
			delete c;
		}
	}

public:
	CList() { head = tail = p = 0; }
	~CList() { Clear(); }

	void Add(T* data)
	{
		if (head)
		{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
		else
		{
			head = (node*)malloc(sizeof(node));
			p = head;
			tail = head;
		}
		p->data = data;
		p->next = 0;
	}
	bool Remove(T* data)
	{
		node* c = head;
		node* p1;
		if (*(head->data) == *data)
		{
			p1 = head;
			head = head->next;
			delete p1;
			return true;
		}

		while (c->next && *(c->next->data) != *data)
		{
			c = c->next;
		}
		if (c->next)
		{
			p1 = c->next;
			c->next = c->next->next;
			delete p1;
			return true;
		}
		return false;
	}
	void Display()
	{
		node* c = head;
		while (c)
		{
			cout << *(c->data) << " ";
			c = c->next;
		}
		cout << endl;
	}
	bool DuplicateN(int n)
	{
		node* c = head;
		node* w;
		T* temp;
		bool a = false;
		int i = 1;
		while (c)
		{
			if (i == n)
			{
				w = new node();
				w->data = c->data;
				w->next = c->next;
				c->next = w;
				c = c->next->next;
				i = 0;
			}
			else
			{
				c = c->next;
			}
			i++;
		}
		return a;
	}
};
