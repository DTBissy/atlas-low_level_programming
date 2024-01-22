#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Prints the alpha bet with prototype
* print_alphabet
* Return: 0
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
