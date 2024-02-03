#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper
 *
 *
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < str[i]; i++)
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	return(0);
}
