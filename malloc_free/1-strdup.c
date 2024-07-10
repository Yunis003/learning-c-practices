#include <stdlib.h>
/**
 * _strdup - is the function that
 *
 * @str - string that given
 * **/
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
	newly = malloc(l * sizeof(char));
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
