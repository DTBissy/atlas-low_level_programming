#include <stdio.h>
/**
*print_line - Prints multiple lines or a new line
*
*Return: void
*/
void print_line(void)
{
	int n;

	n = 0;

	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; n++)
			putchar('_');
		putchar('\n');
	}
}
