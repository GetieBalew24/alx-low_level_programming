#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to 2D array or NULL if failur
 */

int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}

	return (iarray);
}
