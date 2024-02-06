#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_chessboard - Prints a chessboard
 * @a: Pointer Chessboard
 *Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	char *g = (char *)a;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(*((g + b * 8) + c));
		}
		_putchar('\n');
	}
}
