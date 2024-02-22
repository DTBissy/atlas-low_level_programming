#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog 
 * @name: Name of doggy
 * @age: Age of doggy
 * @owner: Owner of doggy
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/** Allocates memory for the new dog */
	dog_t *new_dog_p = malloc(sizeof(dog_t));
	if (new_dog_p == NULL)
	{
		return NULL;
	}
	/** Allocates memory for the new name + 1 for '\0' */
	new_dog_p->name = (char *)malloc(strlen(name) + 1);
	if (new_dog_p->name == NULL)
	{
		free(new_dog_p); /**Frees the memory for dog */
		return NULL;
	}
	strcpy(new_dog_p->name, name);

	new_dog_p->owner =(char *)malloc(strlen(owner) + 1);
	if (new_dog_p->owner == NULL)
	{
		free(new_dog_p->name); /**Frees the memory allocated for the name*/
		free(new_dog_p);/**Free the memory for the dog pointer */
		return NULL;
	}
	strcpy(new_dog_p->owner, owner);

	new_dog_p->age = age;
	return new_dog_p;
}
