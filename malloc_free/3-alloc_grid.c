#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}


#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}


#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}


v#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array (grid) of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}


