#include "main.h"
/**
 * print_numbers(void) - function or entry point
 * @c: character that will be checked
 **/
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
