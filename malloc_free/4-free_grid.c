#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Frees my previous function
 * @array: My grid
 * @height: My My
 * Return: 0
 */

void free_grid(int **array, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(array[i]);
	}
	free(array);
}
