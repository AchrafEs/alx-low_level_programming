#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: a pointer to the pointer to the head of the list
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
