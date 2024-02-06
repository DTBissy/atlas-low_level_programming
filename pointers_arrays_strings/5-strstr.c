#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer Parameter
 * @needle: Pointer Parameter
 * Return:0
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
