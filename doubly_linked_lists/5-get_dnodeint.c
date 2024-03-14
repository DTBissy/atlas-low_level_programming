#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth node
 * @head: Head pointer
 * @index: Indexed list
 * Return: 0
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (0);
}
