#include "lists.h"

/**
 * _listint - Frees the function
 * @head: First node
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while(head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->next);
		free(tmp);
	}
}
