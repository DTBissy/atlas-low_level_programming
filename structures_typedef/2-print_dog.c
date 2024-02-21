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
	if (d->age == 0)
	{
		printf("AGE: (nil)");
	}
	if (d->name == NULL)
	{
		printf("NAME: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Age: %f\n Name: %s\n Owner: %s\n", d->age, d->name, d->owner);
}

