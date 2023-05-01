#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * @h: a pointer to the listint_t list.
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
