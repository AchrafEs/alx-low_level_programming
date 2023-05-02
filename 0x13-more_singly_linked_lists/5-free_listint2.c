#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to the pointer to the head of the list
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}