#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @list_t: the struct
 * @h: an index
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *list = h;
	
	if (list == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (list != NULL)
	{
		printf("[%u] %s\n", list->len, list->str);
		list = list->next;
		count++;
	}
	return (count);
}
