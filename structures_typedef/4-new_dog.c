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

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog;

    /** Allocate memory for the new dog struct*/
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL;
    }

    /** Allocate memory for the name and copy it*/
    new_dog->name = malloc(strlen(name) +  1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);

    /** Set the age*/
    new_dog->age = age;

    /** Allocate memory for the owner and copy it*/
    new_dog->owner = malloc(strlen(owner) +  1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);

    return new_dog;
}
