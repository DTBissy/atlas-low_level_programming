#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *@s1: First String
 *@s2: Second string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *s; 
	unsigned int i;
	unsigned int g;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
	{
		size1++;
	}
	while (s1[size2])
	{
		size2++;
	}
	size2++;
	 s = malloc(sizeof(char) * (size1 + size2));
	 if (s == NULL)
		 return (NULL);
	 i = 0;
	 g = 0;
	 while (s1[i])
	 {
		 s[g++] = s1[i++];
	 }
	 i = 0;
	 while (s2[i])
	 {
		 s[g++] = s2[i++];
	 }
	 return (s);
}
