#include <stdio.h>
#include "main.h"

/**
* print_square - Prints # allover stdout
* @size: function parameter
* Return: 0
*/
void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			       putchar('#');
			putchar('\n');
		}
	}
}
