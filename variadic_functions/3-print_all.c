#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints characters
 * @ap: argument pointer
 **/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_float - prints float
 * @ap: argument pointer
 **/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_int - prints integer
 * @ap: argument pointer
 **/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_string - prints string
 * @ap: argument pointer
 **/
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list(args);
	char *separator = "";
	int i = 0;
	int j = 0;

	va_start(args, format);

	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(args);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	va_end(args);
	printf("\n");
}
