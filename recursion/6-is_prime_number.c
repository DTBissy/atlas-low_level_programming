#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * is_prime - the checks if the number is prime
 * @a: Pointer parameter
 * @i: checks against a
 * Return: "a"
 */

int is_prime(unsigned int a, unsigned int i)
{
	if (a % i == 0)
	{
		if (a == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(a, i + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number
 * @a: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int a)
{
	if (a == 0)
		return (0);
	if (a < 0)
		return (0);
	if (a == 1)
		return (0);
	return (is_prime(a, 2));
}
