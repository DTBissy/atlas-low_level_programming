#include "main.h"
#include <stdio.h>

/**
* print_last_digit - Prints the last digit of a number
* @g: Function parameter
* Return: k
* To get the last digit of a number you have to "remainder it"
*/

int print_last_digit(int g)
{
	int k;

	k = g % 10;

	if (g < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
