#include "lists.h"

/**
 * pop_listint - Deletes the head node of and returns head node data
 * @head: First node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;

	*head = (*head)->next;

	free(temp);
	return (data);
}
