#include <stdio.h>

int main(void)
{
	int n;
	char c;
	int *p;
	char *pp;

	c = 'H';
	n = 98;
	p = &n;
	pp = &c;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of pointer: %lu bytes\n", sizeof(p));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variablr n on my computer: %lu bytes\n", sizeof(n));
	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);
	printf("Address of pointer to n: %p\n", p);
	*p = 402;
	*pp = 'o';
	printf("Value of pointer: %d\n", n);
	printf("Value of '*pp': %d\n", *pp);
	printf("Value of pointer to c: %d ('%c')\n", c, c);
	printf("Value of pointer to '*pp': %d ('%c')\n", *pp, *pp);
	return (0);
}

