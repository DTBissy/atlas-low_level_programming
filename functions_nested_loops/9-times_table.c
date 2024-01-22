#include "main.h"
#include <stdio.h>

/**
* times_table - Prints a times table
* @a, j, result
* Return: void
*/

void times_table(void)
{
	int a, j, result;

	for (a = 0; a < 10; a++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = a * j;
			if (a == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
