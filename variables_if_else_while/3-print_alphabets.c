#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small, bigger;

	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}
	for (bigger = 'A'; bigger <= 'Z'; bigger++)
	{
		putchar(bigger);
	}
	putchar('\n');
	return (0);
}
