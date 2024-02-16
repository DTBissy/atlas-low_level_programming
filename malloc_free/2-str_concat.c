#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *@s1: First String
 *@s2: Second string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t length = len1 + len2 + 1;

	char *result = (char *)malloc(length * sizeof(char));

	if (result == NULL)
	{
		return ('\0');
	}

	memcpy(result, s1, len1);

	memcpy(result + len1, s2, len2 + 1);

	return (result);
}




