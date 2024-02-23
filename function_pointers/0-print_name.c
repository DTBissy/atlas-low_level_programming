#include <stdio.h>

/**
 * print_name - Prints name with pointer to funct
 * @f: function thats being called
 * @name: name
 * Return:0
 */

void print_name(char *name, void(*f)(char *))
{
	f(name);
}

