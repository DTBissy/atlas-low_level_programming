#include <stdio.h>
/**
* main - Printing without printf
* Return: 0
*/

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
			a++;
	}
	putchar('\n');
		return (0);
}
