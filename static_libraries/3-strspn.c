#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of the prefix substring
 * @s: Pointer Parameter
 * @accept: Pointer Parameter
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (!strchr(accept, s[a]))
		{
			break;
		}
	}
	return (a);
}
