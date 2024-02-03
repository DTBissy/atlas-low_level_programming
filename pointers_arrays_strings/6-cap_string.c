#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitilixe the first word of the string
 * @str: Function Param
 * Return: 0
 */

char *cap_string(char *str)
{
	int i;
	int p;
	char c[] = {59, 44, 46, 34, 63, 33, 40, 41, 32, 125, 123, 9, 10};

	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		p = 0;
		while (c[p] != '\0')
		{
			if (c[p] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			p++;
		}
		i++;
	}
	return (str);
}
