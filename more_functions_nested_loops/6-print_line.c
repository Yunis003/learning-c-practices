#include "main.h"
/**
 * print_line - prints line
 * @n: integer that will be checked
 **/
void print_line(int n)
{
	char a = '_';

	for (a = 0; a <= n; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}

}
