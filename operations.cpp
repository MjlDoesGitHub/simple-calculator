#include "operations.h";
#include <iostream>

double add(double x, double z)
{
	return x + z;
}
double subtract(double x, double z)
{
	return x - z;
}
double multiply(double x, double z)
{
	return x * z;
}
double divide(double x, double z)
{
	if (x == 0 && z == 0)
	{
		std::cout << "Cannot divide 0 by 0!" << '\n';
		return 0;
	}
	return x / z;
}