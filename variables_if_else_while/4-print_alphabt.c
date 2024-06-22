#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small == 'q' || small == 'e')
		{
			continue;
		}
		putchar(small);
	}
	putchar('\n');

	return (0);
}
