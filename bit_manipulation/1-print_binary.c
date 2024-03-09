#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The number to be converted
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 2);
	}
	printf("%lu", n & 1);
}
