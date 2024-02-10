#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * power_operation - returns the natural square root of a number
 * @a: input number.
 * @c: iterator.
 * Return: square root or -1.
 */

int power_operation(int a, int c)
{
	if (c % (a / c) == 0)
	{
		if (c * (a / c) == a)
			return (c);
		else
			return (-1);
	}
		return (0 + power_operation(a, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @a: input number.
 * Return: natural square root
 */

int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (0);
	if (a == 1)
		return (1);
	return (power_operation(a, 2));
}
