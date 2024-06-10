#include <stdio.h>
#include "main.h"

/**
* print_triangle - Prints a triangle
* @size: function parameter
* Return: 0
*/

void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int a, b, c;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
				putchar(' ');
			{
				for (c = 1; c <= a; c++)
					putchar('#');
			}
			putchar('\n');
		}
	}
}
