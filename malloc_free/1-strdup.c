#include <stdlib.h>
/**
 * _strdup - is the function that
 *
 * @str - string that given
 * **/
char *_strdup(char *str)
{
	char *newly;

	if (str == NULL)
	{
		return (NULL);
	}
	newly = malloc(sizeof(char));
	if (newly == NULL)
	{
		return (NULL);
	}
	newly = str;
	return (newly);
}
