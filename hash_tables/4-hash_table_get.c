#include "hash_tables.h"


char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index = 0;
  hash_table_t *current = ht;

  while (current != NULL)
  {
    if (index == key)
    {
      return (key);
    }
    index++;
    current = current->next;
  }
  return (0);
}