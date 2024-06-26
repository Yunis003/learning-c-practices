#include "main.h"
/**
 * print_most_numbers - function or entry point
 * Return: expected result
 **/

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	if (a == '2' || a == '4')
	{
		continue;
	}
	_putchar('\n')'
}
