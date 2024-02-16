#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 * @width: Width row
 * @height: Height row
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int j; /** Looper for Height*/
	int i; /** Looper for Width*/
	int **array = (int **)malloc(height * sizeof(int *));
	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
		if (!array[i])
		{
			for(j = 0; j < height; j++)
			{
				free(array[j]);
			}
			free(array);
			return NULL;
		}
	}
	return (array);
}

void free_2d_array(int **array, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(array[i]);
	}
	free(array);
}
