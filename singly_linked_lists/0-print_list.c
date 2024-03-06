#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: Head node
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
