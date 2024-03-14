#include "lists.h"
/**
* sum_dlistint - Returns the sum of data
* @head: Head pointer
* Return: 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
