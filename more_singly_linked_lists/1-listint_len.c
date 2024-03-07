#include "lists.h"

/**
 * listint_len - Returns the elements counted(count++)
 * @h: First Node
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
