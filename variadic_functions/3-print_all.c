#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: constant char ponter pointing to constant var format;
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	char *s;
	unsigned int i;
	float f;
	char c;
	const char *format_copy = format;

	va_list gah;
	va_start(gah, format);

	while (*format_copy)
	{
		switch (*format_copy)
		{
			case 'c':
				c = va_arg(gah, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(gah, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(gah, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(gah, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				if (s != NULL)
				{
					printf("%s, ", s);
				}
				break;
			default:
				break;
		}
		format_copy++;
	}
	va_end(gah);
	printf("\n");
}
