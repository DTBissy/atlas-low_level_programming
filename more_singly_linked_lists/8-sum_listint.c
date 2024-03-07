#include "lists.h"

/**
 * sum_listint - Returnd the sum of all data in the list
 * @head: First node
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return sum;
}
