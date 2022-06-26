#define STACK struct node
#include <iostream>
#include "Utillities.h"
#include <sstream>
using namespace std;
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
	const void Display();
	void Release();
	void RemoveEveryN(int);
	STACK* GetList() { return head; }

	friend std::ostream& operator<< (std::ostream& out, const CListF& listf);
	friend std::istream& operator>> (std::istream& in, CListF& listf);
};
