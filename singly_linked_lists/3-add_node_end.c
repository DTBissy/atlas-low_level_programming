#include "lists.h"

/**
 * add_node_end - Adds nodes at the end of the list
 * @head: First node
 * @str: Names
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;

	list_t *new_end_node = malloc(sizeof(list_t));

	if (new_end_node == NULL)
	{
		return (NULL);
	}
	new_end_node->str = strdup(str);
	if (new_end_node->str == NULL)
	{
		free(new_end_node);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new_end_node->len = len;
	new_end_node->next = NULL;

	if(*head == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		list_t *last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_end_node;
	}
	return new_end_node;
}
