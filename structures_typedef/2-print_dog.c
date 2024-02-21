#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * print-dog - prints a struct
 * @d: Struct
 * Return: 0
 */

void print_dog(struct dog *d)
{
	

	if(d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Age: %f\n Name: %s\n Owner: %s\n", d->age, d->name, d->owner);
}

