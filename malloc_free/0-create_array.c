#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and intializes a specifc char
 * @size: Size of malloc
 * @c: Array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
/** "size" is the array im counting */
	if (size == '\0')
	{
		return (NULL);
	}
/** Creating the memory space to the size of "size" */
	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
/** Return what you use to initalize malloc *s in this case not 0*/
	return (s);
}
