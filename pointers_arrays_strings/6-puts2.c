#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts2 - Prints every other character of string
* @str: funtcion parameter
* Return: 0
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar (str[i]);
	}
	_putchar('\n');
}
