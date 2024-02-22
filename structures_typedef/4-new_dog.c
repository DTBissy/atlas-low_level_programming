#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - New dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;
	int Nname;
	int Nowner;

	new_dog = malloc(sizeof(new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return NULL;
	}

	for (Nname = 0; name[Nname]; Nname++);
	for (Nowner = 0; owner[Nowner]; Nowner++);

	new_dog->name = malloc(Nname + 1);
	new_dog->owner = malloc(Nowner + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
	}
	new_dog->age = age;

	for (i = 0; i < Nname; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	for (i = 0; i < Nowner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
