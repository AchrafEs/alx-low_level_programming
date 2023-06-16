#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t length = 0;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
