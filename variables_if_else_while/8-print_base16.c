#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num, letter;

	for (num = '1'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
