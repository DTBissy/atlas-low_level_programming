#include "lists.h"
/**
 * list_len - Prints the elements
 * @h: Head pointer
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
