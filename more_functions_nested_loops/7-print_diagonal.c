#include <stdio.h>
#include "main.h"

/**
* print_diagonal - Prints diagonal lines on new lines
* Return: 0
*/

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int a;
		int b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
