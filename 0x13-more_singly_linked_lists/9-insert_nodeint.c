#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: A pointer to the pointer of the head of the list.
 * @idx: he index of the list where the new node should be added.
 * @n: an integer.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = NULL, *temp = *head;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
