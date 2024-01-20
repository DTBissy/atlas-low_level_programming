#include <stdio.h>
/**
* main - Printing alphabet without q and e
*
* Return: 0
*/

int main(void)
{
	char a;

	a = 'a';
		while (a != 'q', 'e')
		{
			putchar(a);
			a++;
		}
	return (0);
}
