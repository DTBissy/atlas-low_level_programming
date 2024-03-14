#include "lists.h"
/**
 * free_dlistint - Third time freeing the listint
 * @head: Head pointer
 * Return: 0
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
