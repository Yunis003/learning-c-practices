#include "main.h"
/**
 * print_sign - entry point or function
 * @n: checked parameter
 * Return: 1 0 or -1 depends on the case
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(5);
		return (1);
	} else if (n < 0)
	{
		_putchar(7);
		return (-1);
	}
	else
		_putchar(9);
	return (0);

}
