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
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return NULL;
	}
	/** Allocates memory for the new name + 1 for '\0' */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog); /**Frees the memory for dog */
		return NULL;
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name); /**Frees the memory allocated for the name*/
		free(new_dog);/**Free the memory for the dog pointer */
		return NULL;
	}
	strcpy(new_dog->owner, owner);

	return new_dog;
}
