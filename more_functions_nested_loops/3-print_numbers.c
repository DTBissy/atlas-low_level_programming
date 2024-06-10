#include <stdio.h>
#include "main.h"

/**
* print_numbers - Prints numbers from 0 to 9
* Return: 0
*/

void print_numbers(void)
{
	int c;

	c = 48;

	while (c >= 48 && c <= 57)
	{
		putchar(c);
			c++;
	}
	putchar('\n');
}
