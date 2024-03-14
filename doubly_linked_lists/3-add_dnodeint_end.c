#include "lists.h"
/**
* add_dnodeint_end - Adds node at the end
* @head: Head pointer
* @n: data inserted
* Return: 0
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *endnode = malloc(sizeof(dlistint_t));

	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;
	if (*head == NULL)
	{
		endnode->prev = NULL;
		*head = endnode;
		return (endnode);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = endnode;
	endnode->prev = current;
	return (endnode);
}
