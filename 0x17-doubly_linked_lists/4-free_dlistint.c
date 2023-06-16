#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * @head: a pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
