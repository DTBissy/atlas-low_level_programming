#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strstr - Locate a substrring
 * @haystack: Pointer Parameter
 * @needle: Pointer Parameter
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i +  1;
	}
	return (NULL);
}
