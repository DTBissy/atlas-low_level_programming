#include <stdio.h>
/**
* main - Printing all the numbers of base 16 in lowercase
* Return: 0
*/

int main(void)
{
	int a;

	char b;

	a = 0;
	b = 'a';

	while
		(a < 10) {
			putchar(a + '0');
			a++;
		}
	while
		(b < 'f') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
