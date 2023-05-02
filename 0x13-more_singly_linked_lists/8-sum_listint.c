#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t
 * @head: a pointer to the head of the list.
 *
 * Return: the sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
