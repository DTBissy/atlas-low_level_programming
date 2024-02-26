#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	char *s;
	int i;
	double f;
	char c;
	const char *format_copy = format;
	
	va_list gah;
	va_start(gah, format);

	while (*format_copy != '\0')
	{
		if (*format_copy == 'c')
		{
			c = va_arg(gah, int);
			printf("%c", c);
		}
		if (*format_copy == 'i')
		{
			i = va_arg(gah, int);
			printf("%d", i);
		}
		if (*format_copy == 'f')
		{
			f = va_arg(gah, double);
			printf("%f", f);
		}
		if (*format_copy == 's')
		{
			s = va_arg(gah, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
			printf("%s", s);
			}
		}
	format_copy++;
	}
	va_end(gah);
	printf("\n");
}
