#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: minimun
 * @max: maximum
 * Return: 0
 */
int *array_range(int min, int max)
{
	int g = 0;
	int i = 0;
	int *s;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	if (min < 0 || max > 10)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * size);
	if (!s)
	{
		return (0);
	}
	while (i < max - min)
	{
		s[i++] = g++;
}
return (s);
}
