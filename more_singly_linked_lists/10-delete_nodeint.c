#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: First node
 * @index: Node for deletion on the index
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int currentIndex = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && currentIndex != index)
	{
		previous = current;
		current = current->next;
		currentIndex++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
