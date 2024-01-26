#include <stdio.h>
#include "main.h"
/**
*print_line - Prints multiple lines or a new line
*@n: function parameter
*Return: void
*/
void print_line(int n)
{
	if (n <= 0)
	putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			putchar('_');
		putchar('\n');
	}
}

