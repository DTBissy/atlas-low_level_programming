#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table to add or update
 * @key: The key(name)
 * @value: Data associated with key, value must be duplicated
 * Return: 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index = 0;
  hash_node_t* node = NULL, *add_node = NULL, *tmp = NULL;
}