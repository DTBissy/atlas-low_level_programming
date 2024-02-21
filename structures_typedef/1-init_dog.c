#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include "main.h"

/**
 * init_dog - Using the variables of dog.h
 * @d: struct with dog variables
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

