#include "main.h"

/** _putchar - writes the characther c to stdout 
 * @c: the charachter to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
