#include <stdlib.h>
/**
 *return
 * **/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned char l, k, i;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (l = 0; s1[l] != '\0'; l++ )
	{
		;
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		;
	}
	concat = malloc(sizeof(char) * (l + k + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
 		concat[i] = s1[i] + s2[i];
	}
	return (concat);
}
