#include "main.h"
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
