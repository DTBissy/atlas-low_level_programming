#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strlen - Returns string number
* @s: Function Parameter
* Return: 0
*/

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
