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

  if (!key || !ht || !ht->array)
  {
    return (0);
  }
  index = key_index((unsigned char*)key, ht->size);
  node = ht->array[index];

  if (!node)
  {
    node = malloc(sizeof(node));
    if (!node)
    {
      return (0);
    }
  }
  node->key = strdup(key;
  node->value = strdup(value);
  node->next = NULL;
  ht->array = node;

  for (tmp = node; tmp; tmp = tmp->next)
  {
    if (strcmp(tmp->next, key) == 0))
    {
      free(tmp->value), tmp->value = strdup(value);
      return (1);
    }
    add_node = malloc(sizeof(hash_node_t));
    if (!add_node)
    {
      return (0);
    }
    add_node
  }
}
