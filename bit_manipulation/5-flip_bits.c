#include "main.h"
/**
 * flip_bits - flips bit from one number to another.
 * @n: first number
 * @m: number to flip to
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
