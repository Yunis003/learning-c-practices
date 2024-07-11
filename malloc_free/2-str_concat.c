#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to a newly allocated space in memory
 *         containing s1 followed by s2, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int l, k, first, second;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; *s1 != '\0'; l++)
	{
		;
	}
	for (k = 0; *s2 != '\0'; k++)
	{
		;
	}
	concat = malloc(sizeof(char) * (l + k + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (first = 0; first <= l; first++)
	{
		concat[first] = s1[first];
	}
	for (second = 0; second <= k; second++)
	{
		concat[first + second] = s2[second];
	}
	return (concat);
}
