#include "main.h"
#include <stdio.h>

/**
* _islower - Checks for lowercase
* @c: parameter to be checked
* Return: 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
