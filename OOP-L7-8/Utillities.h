#pragma once
#include <iostream>

static int ValidateINT()
{
	char data[10];
	std::cin >> data;
	while (!isdigit(data[0]))
	{
		fflush(stdin);
		std::cout << std::endl << "�������. ������� �����: ";
		std::cin >> data;
	}
	return atoi(data);
}