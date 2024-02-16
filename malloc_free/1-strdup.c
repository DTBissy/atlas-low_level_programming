#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Moves a pointer a round while carrying th string
 * @str: Pointer with string
 * Return: 0
 */
char *_strdup(char *str)
{
	size_t length = strlen(str);
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = (char *) malloc((length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
