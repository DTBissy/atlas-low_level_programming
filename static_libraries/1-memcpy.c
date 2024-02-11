#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_memcpy - Copies Memory area
 *@dest: Where memory will be copied too
 *@src: Where memory will be copied from
 *@n: Function Parameter
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
