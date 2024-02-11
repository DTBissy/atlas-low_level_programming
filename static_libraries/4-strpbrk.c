#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches for any bytes
 * @s: Pointer Parameter
 * @accept: Pointer Parameter
 * Return:0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
