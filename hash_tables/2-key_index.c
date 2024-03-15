#include "hash_tables.h"
/**
* key_index - Returns the index of a key
* @key: The inputted key
* @size: Size of the array of the hashtable
* Return: 0
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned int hash = hash_djb2(key);

return (hash % size);
}
