#include <stdio.h>
#include "main.h"

/**
* _isupper - Checks for uppercase
* @c: function parameter
* Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
