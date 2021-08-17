#include "input.h";
#include "operations.h";
#include <iostream>

int main()
{
	double x{ getInput() };
	int y{ getOperation() };
	double z{ getInput() };

	if (y == 1)
	{
		std::cout << "The result is: " << add(x, z) << '\n';
	}
	if (y == 2)
	{
		std::cout << "The result is: " << subtract(x, z) << '\n';
	}
	if (y == 3)
	{
		std::cout << "The result is: " << multiply(x, z) << '\n';
	}
	if (y == 4)
	{
		std::cout << "The result is: " << divide(x, z) << '\n';
	}

	main();
	return 0;
}



/*
* TODO:
* 1. choose any of the four basic operators: addition, subtraction, multiplication, division
* 2. create separate functions for number input, operations, and printing
* 3. expanding TBD
* 
* get first number
* ask for operation
*	based on operation, store that in main for later
* get second number
* execute function for basic operator based on stored operation
*/