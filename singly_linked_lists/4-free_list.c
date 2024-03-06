#include "lists.h"

/**
 * free_list - Frees list_t
 * @head: First node
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
