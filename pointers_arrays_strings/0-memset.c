#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_memset - Fills memory with a constant byte
 *@s: Pointer parameter
 *@b: Fucntion parameter
 *@n: Function parameter
 *Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

