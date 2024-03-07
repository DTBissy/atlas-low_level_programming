#include "lists.h"

/**
 * free_listint2 - Second time freeing th list
 * @head: First Node
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
