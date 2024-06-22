#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '1'; num <= "10"; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
