#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
