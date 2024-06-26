#include "main.h"
/**
 * print_diagonal - function or entry point
 * @n: character that will be checked
 **/
void print_diagonal(int n)
{
	int a;


	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
