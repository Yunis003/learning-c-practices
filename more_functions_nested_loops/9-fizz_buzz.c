#include "main.h"
#include <stdio.h>
/**
 * main -function or entry point
 * Return: Always 0 success.
 **/

int main(void)
{
	int i;


	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf('Fizz');

		}
		else if (i % 5 == 0)
		{
			printf('Buzz');
		}
	}
	printf('\n');
}
