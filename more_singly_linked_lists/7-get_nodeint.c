#include "list.h"

/**
 * *get_nodeint_at_index - Returnd the nth node of listint_t
 * @head: first node
 * @index: Nth node
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	listint_t *temp = head;

	while (head != NULL)
	{
		if (count == index)
		{
			return (tmp->n);
		}
		count++;
		tmp = tmp->next;
	}
	return (0);
}
