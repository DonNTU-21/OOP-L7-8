#pragma once
#include <iostream>

static int ValidateINT()
{
	char data[10];
	std::cin >> data;
	while (!isdigit(data[0]))
	{
		fflush(stdin);
		std::cout << std::endl << "Неверно. Введите число: ";
		std::cin >> data;
	}
	return atoi(data);
}