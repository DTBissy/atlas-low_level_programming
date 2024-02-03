#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 *string_toupper - converts lower case to upper case with ASCII
 *@str: Function param
 *Return: 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
