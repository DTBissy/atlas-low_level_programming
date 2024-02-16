#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and intializes a specifc char
 * @size: Size of malloc
 * @c: Array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if(size == '\0')
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	free(s);
	return (0);
}
