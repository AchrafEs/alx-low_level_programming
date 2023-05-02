#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: a pointer to the pointer to the head of the list
 * @n: an integer value of the new node to be added
 *
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
