#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - Prints strings
 * @separator: The comma with the space
 * @n: The string to print
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(args, char*));
	}
	printf("\n");
	va_end(args);
}
