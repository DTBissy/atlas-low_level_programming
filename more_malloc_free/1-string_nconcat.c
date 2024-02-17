#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/** string_nconcat - Concatenates two strings
 * @s1: Dest pointer
 * @s2: SRC pointer
 * @n: iterator pointer
 * Retrn: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;
	char *s;

	/** Checking function parameters pointers before we let them in */ 
	if(s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
/** You can let function pointers create the variable while the array(size1, size2) are the Variable sizes */
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while(s2[size2] != '\0')
	{
		size2++;
	}
/** like the question asked if n is greater than the length of size2 use the whole s2 */
	if (n > size2)
		n = size2;
	s = malloc((size1 + n + 1) * sizeof(char));

	if (s == NULL)
		return (0);
/** Typical strncat function MEMORIZE */
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (;i < (size1 + n); i++)
	{
		s[i] = s2[i - size1];
	}
	s[i] = '\0';
/** confused on wheter this is being free or not */
	return(s);
}
