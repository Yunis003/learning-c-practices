#include "main.h"
/**
 * for loop - function or entry point
 * @c: character that will be checked
 * Return: 0 or 1 depends on the case
 **/
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar("%d", a);
	}
	_putchar('\n');
}
