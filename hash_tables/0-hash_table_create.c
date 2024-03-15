#include "hash_tables.h"
/**
* hash_table_create - Creates a hash table
* @size: Size of hash array
* Return: 0
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = malloc(sizeof(hash_table_t) * 2);
if (hash_table == NULL)
{
return (NULL);
}
size = size;
return (hash_table);
}
