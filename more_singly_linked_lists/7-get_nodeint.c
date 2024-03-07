#include "lists.h"

/**
 * *get_nodeint_at_index - Returnd the nth node of listint_t
 * @head: first node
 * @index: Nth node
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (0);
}
