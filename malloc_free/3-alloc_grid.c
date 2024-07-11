#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers, initialized to 0,
 * or NULL if width or height is 0 or negative, or if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int *matris;
	int l, k, i, j;

	for (l = 0; l <= width; l++)
	{
		;
	}
	for (k = 0; k <= height; k++)
	{
		;
	}
	matris = malloc(sizeof(int) * (l + k + 1));
	for (i = 0; i <= l; i++)
	{
		matris[i] = width[i];
	}
	for (j = 0; j <= k; j++)
	{
		matris[i + j] = width[j];
	}
	return (matris);
}
