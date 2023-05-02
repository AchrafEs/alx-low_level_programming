#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - a function that prints a listint_t
 * @head: a pointer to the head of the list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t count = 0;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		temp = current;
		current = current->next;
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (count);
}
