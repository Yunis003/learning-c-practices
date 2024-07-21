#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - is the function that sum all the args
 * n- is the number of integer
 * ... is the arguments
 * **/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;
	i
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
