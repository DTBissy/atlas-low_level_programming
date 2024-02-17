#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: minimun
 * @max: maximum
 * Return: 0
 */
 unsigned int *array_range(unsigned int min,unsigned int max)
{
	unsigned int g = 0;
	unsigned int i = 0;
	unsigned int *s;
	unsigned int size = max - min + 1;

	if (min > max)
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
