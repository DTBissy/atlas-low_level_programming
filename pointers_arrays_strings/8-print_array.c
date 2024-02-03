#include <stdio.h>
#include "main.h"

/**
 *print_array - Prints the value of the indexs
 *@a: function parameter
 *@n: Function Paremeter
 *Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
