#include <iostream>
#include <math.h>
#include "CList.h"

using namespace std;

int main()
{
	CList<int> ints;
	CList<double> doubles;
	for (int i = 0; i < 10; i++)
	{
		ints.Add(new int(i+1));
		doubles.Add(new double(cosh(i)));
	}
	cout << "ints: " << endl;
	ints.Display();
	cout << endl << "doubles: " << endl;
	doubles.Display();

	ints.DuplicateN(2);
	doubles.DuplicateN(3);

	cout << endl << "ints duplicated: " << endl;
	ints.Display();
	cout << endl << "doubles duplicated: " << endl;
	doubles.Display();
}