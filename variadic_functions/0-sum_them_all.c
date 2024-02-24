#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Function to be called
 * @n: integer
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	unsigned int s = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
