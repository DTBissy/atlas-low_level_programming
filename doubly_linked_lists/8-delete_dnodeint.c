#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes node at index
* @head: Head Pointer
* @idx: Index
* Return: 0
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *current = *head;
	dlistint_t *deletenode;
	unsigned int i = 0;

	if (current == NULL)
	{
		return (-1);
	}

	if (idx == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (0);
		}

		for (i = 0; current != NULL && i < idx; i++)
		{
			current = current->next;
		}
		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}
		deletenode = current->next;
		current->next = deletenode->next;
		if (deletenode->next != NULL)
		{
			deletenode->next->prev = current;
		}
		free(deletenode);
		return (0);
}
