#include "main.h"
/**
 * print_diagonal - function or entry point
 * @n: character that will be checked
 **/
void print_diagonal(int n)
{
	int a, j;


	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(' ');
				if (a == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
