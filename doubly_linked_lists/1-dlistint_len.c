#include "lists.h"
/**
* dlistint_len - Prints all elements of struct
* @h: head node
* Return: 0
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
