#include "main.h"
/**
 * print_alphabet - entry point or function
 * Return: Void
 **/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
