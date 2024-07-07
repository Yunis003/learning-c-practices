#include "main.h"
/**
 * is_prime_number - function checks for the number is prime or not
 * Return: 1 or zero depends on the case
 * @n: number to be checked
 * @i: divisor
 **/
int divisor(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (divisor(n, 2));
	}
}
/**
 * divisor - helper function for checking number
 * Return: 1, 0 or divisor number
 * @n: number to be checked
 * @i: divisor
 **/
int divisor(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (divisor(n, i + 1));
	}
}
