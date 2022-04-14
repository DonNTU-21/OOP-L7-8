#define STACK struct node
#include <iostream>

class CListF
{
	STACK
	{
		int info;
		STACK* next;
	};
	STACK* head;

public:
	CListF();
	CListF(int);
	~CListF();
	void AddItem(int);
	void Display();
	void Release();
	void RemoveEveryN(int);
	STACK* GetList() { return head; }

	friend std::ostream& operator<< (std::ostream& out, const CListF& listf);
};

