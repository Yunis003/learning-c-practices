#include "main.h"
/**
 * more_numbers - function or entry point
 * Return: expected result for function
 **/

void more_numbers(void)
{
	int a = 0, j = 0;

	while (a <= 10)
	{
		_putchar('\n');
		a++;

		while (j <= 14)
		{
			j++;
			_putchar(j);
		}
	}
	_putchar('\n');
}
