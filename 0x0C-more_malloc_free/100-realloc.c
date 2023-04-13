#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates
 * a memory block using malloc and free.
 * @ptr: a pointer
 * @old_size: the previous allocated memory
 * @new_size: the new memory.
 *
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	char *str;
	char *new_str;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	str = (char *)ptr;
	new_str = (char *)ptr2;
	for (i = 0; i < old_size; i++)
	{
		new_str[i] = str[i];
	}
	free(ptr);
	return (ptr2);
}
