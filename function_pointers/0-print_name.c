#include <stdio.h>
#include "fucnctions_pointers.h"

/**
 * print-name - Prints name with pointer to funct
 * @name: Name
 * @f: function thats being called
 * @char: Not sure
 * Return:0
 */

void print_name(char *name, void(*f)(char *))
{
	f();

