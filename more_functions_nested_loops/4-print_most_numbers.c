#include <stdio.h>

/**
* print_most_numbers - Prints numbers but 2
*
* Return: void
*/

void print_most_numbers(void)
{
	int c;

	c = 48;

	while (c >= 48 && c <= 57)
	{
		if (c != 50 && c != 52)
		putchar(c);
		(c++);
	}
	putchar('\n');
}
