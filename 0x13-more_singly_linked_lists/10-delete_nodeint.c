#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t
 * @head: a pointer to the pointer to the head of the list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		if (current->next == NULL)
			return (-1);
		previous = current;
		current = current->next;
		i++;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
