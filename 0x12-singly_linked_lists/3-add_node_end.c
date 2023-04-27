#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: A double pointer to the head of the list_t
 * @str: the string to be added to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
