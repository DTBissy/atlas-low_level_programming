#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;

hash_node_t *node = NULL;
hash_node_t *tmp = NULL;

if (!ht || !ht->array || !key)
{
	return (NULL);
}

index = key_index((unsigned char *)key, ht->size);

node = ht->array[index];
if (!node)
	return (NULL);
if (strcmp(node->key, key) == 0)
	return (node->value);

for (tmp = node; tmp; tmp = tmp->next)
	if (strcmp(tmp->key, key) == 0)
	return (tmp->value);
return (NULL);
}
