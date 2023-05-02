#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: A pointer to a pointer to the head node of the listint_t
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (n);
}
