#include <stdio.h>
#include "main.h"

/**
* swap_int - Swaps valuse
* @a: Function Parameter
* @b: Function Parameter
* Return:0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
