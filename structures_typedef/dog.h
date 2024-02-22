#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - for dogs
 *@name: Nae for dog
 *@age: Age of dog
 *@owner: Owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
