#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a node at index
* @h: HeadPointer
* @idx: Index
* @n: Insert spot
* Return: 0
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *current = *h;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
