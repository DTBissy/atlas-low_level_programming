#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - for dogs
 *@name: Nae for dog
 *@age: Age of dog
 *@owner: Owner name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
