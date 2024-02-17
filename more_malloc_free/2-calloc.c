#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Not sure
 * @size: Pointer size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t bigsize = nmemb * size;
	char *s;
	unsigned int i;

	if (nmemb == '\0')
	{
		return (NULL);
	}
	if (size == '\0')
	{
		return (NULL);
	}
	s = malloc(bigsize);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < bigsize; i++)
	{
		s[i] = 0;
	}

	return (s);
}
