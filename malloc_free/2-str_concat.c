#include <stdlib.h>
/**
 *return
 * **/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned char l, k, i1, i2;

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
	for (i1 = 0; i1 <= l; i1++)
	{
 		concat[i1] = s1[i1];
	}
	for (i2 = 0; i2 <= k; i2++)
	{
		concat[i1 + i2] = s2[i2];
	}
	return (concat);
}
