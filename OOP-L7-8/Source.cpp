#include <iostream>
#include <string>
#include "CList.h"
#include "CListF.h"

using namespace std;


int main()
{
	CListF clistf;
	clistf.Display();
	setlocale(LC_ALL, "rus");
	CList<int> ints;
	CList<string> stringList;
	CList<CListF> lists;
	for (int i = 0; i < 3; i++)
	{
		cout << "#" << i << endl;
		ints.Add(new int(i+1));
		stringList.Add(new string(to_string(i+1)+"a"));
		lists.Add(new CListF(2));
		cout << endl;
	}
	cout << "ints: " << endl;
	ints.Display();
	cout << endl << "list of lists: " << endl;
	lists.Display();



	cout << endl << "stringList: " << endl;
	stringList.Display();

	ints.DuplicateN(2);
	stringList.DuplicateN(3);
	lists.DuplicateN(2);

	cout << endl << "ints duplicated: (n=2)" << endl;
	ints.Display();
	cout << endl << "stringList duplicated: (n=3)" << endl;
	stringList.Display();
	cout << endl << "list of lists duplicated: (n=2)" << endl;
	lists.Display();
}