#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * @head: a pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next = current->next;

	while (current != NULL)
	{
		free(current);
		current = next;
	}
}
