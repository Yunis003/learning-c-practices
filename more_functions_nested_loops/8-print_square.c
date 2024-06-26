#include "main.h"
/**
 * print_square - function or entry point
 * @size: size of the square
 **/

void print_square(int size)
{
	int i, j;


	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
