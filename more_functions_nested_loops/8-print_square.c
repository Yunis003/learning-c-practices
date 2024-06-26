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
			if (i != j)
			{
				_putchar('\n');
			}
			else if (i == j)
			{
				_putchar('#');
				_putchar('\n');
			}
			else
				_putchar('\n');
			
		}
	}
}
