#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that returns
 * the sum of all its parameters
 * @n: number of paramaters
 * Return: 0 or sum depends on the case
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, cem;

	va_start(args, n);

	cem = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		cem += va_arg(args, int);
	}
	va_end(args);
	return (cem);
}
