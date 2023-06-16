#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: a pointer to the head of the list
 * @index: index of the node, starting from 0.
 *
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
