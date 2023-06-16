#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of
 * all the data (n) of a list
 * @head: a pointer to the head of the list
 *
 * Return: the sum of all the (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
