#include "lists.h"

/**
 * *add_nodeint_end - Adds nodes to the end
 * @head: First node
 * @n: Number to be printed
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end = malloc(sizeof(listint_t));

	if (new_node_end == NULL)
	{
		return (NULL);
	}

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node_end;
	}
	return (new_node_end);
}

