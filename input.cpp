#include "input.h";
#include <iostream>

double getInput() // create invalid input detection
{
	std::cout << "Enter a number\n";
	double x{};
	std::cin >> x;
	return x;
}

int getOperation()
{
	std::cout << "What operation would you like to do?\n";
	std::string opr{};
	std::cin >> opr;
	if (opr.compare("add") == 0)
	{
		return 1;
	}
	if (opr.compare("subtract") == 0)
	{
		return 2;
	}
	if (opr.compare("multiply") == 0)
	{
		return 3;
	}
	if (opr.compare("divide") == 0)
	{
		return 4;
	}
	std::cout << "Error! Please choose from the following: 'add', 'subtract', 'multiply', 'divide'\n";
	return getOperation();
}