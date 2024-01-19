#include <stdio.h>
/**
* main - Writing a C program that prints the sizes of types on the computer
*
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int j;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of an long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of an long long int: %lu bytes(s)\n", (unsigned long)sizeof(j));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));

	return (0);
}
