#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	unsigned int i, l;
	char *newly;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0'; l++)
	{
		;
	}
	newly = malloc((l + 1) * sizeof(char));
	if (newly == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		newly[i] = str[i];
	}
	return (newly);
}
