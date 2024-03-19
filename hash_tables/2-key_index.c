#include "hash_tables.h"
/**
* key_index - Returns the index of a key
* @key: The inputted key
* @size: Size of the array of the hashtable
* Return: 0
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = 0;

index = djb2(key);
index %= size;
return (index);
}
