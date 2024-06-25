#include "main.h"
/**
 * _isupper - function or entry point
 * @c: character that will be checked
 * Return: 0 or 1 depends on the case
 **/
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= "z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
