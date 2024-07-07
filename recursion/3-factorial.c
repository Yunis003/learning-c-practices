#include "main.h"
/**
 * factorial(int n) is the main function
 * n is the integer which is the must fin the integral
 * **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
