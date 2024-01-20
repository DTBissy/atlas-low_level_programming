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
		while (a <= 'z')
		{
			if ((a != 'q' && a !='e') && a <= 'z')
			putchar(a);
			a++;
		}
		putchar('\n');
	return (0);
}
