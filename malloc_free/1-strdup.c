#include <stdlib.h>
/**
 * _strdup - is the function that
 *
 * @str - string that given
 * **/
char *_strdup(char *str)
{
	str = malloc(sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
	free(str);
}
