#include "main.h"
/**
 * print_last_digit - check the code
 * Return: Always digit
 * @n: parameter that will be checked
 **/
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
