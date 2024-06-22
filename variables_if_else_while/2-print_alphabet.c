#include <stdio.h>
/**
 * main -function or entry point
 * Return: Always 0 (success)
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}

