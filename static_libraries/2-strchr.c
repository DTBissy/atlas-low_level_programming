#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a string
 * @s: Pointer Parameter
 * @c: Function Parameter
 * Return:0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
