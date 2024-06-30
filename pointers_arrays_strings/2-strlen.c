#include "stdio.h"
/**
 * _strlen - string length function
 * @s: compilaber
 *
 * Return: string's length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
