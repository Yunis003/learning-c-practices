#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings- function that print strings
 * @separator:  the string to be printed between the strings
 * @n: the number of strings passed to the function
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
