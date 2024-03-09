#include "main.h"

/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: Strinf pointer
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	/** check if string is null */
	if (b == NULL)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val = val + b[i] - '0';
		i++;
	}
/** if there are any characther left that are not '0' or '1', return 0 */
	if (b[i] != '\0')
	{
		return (0);
	}
	return (val);
}
