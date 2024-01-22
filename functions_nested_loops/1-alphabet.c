#include <stdio.h>
#include "main.h"
/**
* main - Prints the alpha bet with prototype
* Return: 0
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
