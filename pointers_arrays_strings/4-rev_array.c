#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int count = 0;

	for (i = 0; a[i] < n && a[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		int ;

		b = a[i];
		a[i] = a[count - 1 - i];
		a[count - 1 - i] = b;
	}
}
