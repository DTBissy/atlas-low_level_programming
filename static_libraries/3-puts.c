#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _puts - Prints a string
* @str: funtcion parameter
*Return: 0
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
