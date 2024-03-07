#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: First node
 * @index: Node for deletion on the index
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *previous = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	while (temp != NULL)
	{
		if (i == index)
		{
			if (previous == NULL)
			{
				*head = temp->next;
			}
			else
			{
				previous->next = temp->next;
			}
			free(temp);
			return (1);
		}
		previous = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
