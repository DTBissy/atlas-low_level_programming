#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Raises y to the power of x
 * @x: Pounter Parameter
 * @y: Pointer Paramter
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
