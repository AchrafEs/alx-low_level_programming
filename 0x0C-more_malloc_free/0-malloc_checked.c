#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: memory to allocate
 *
 * Return: a pointer to the allocated memory (success)
 * On Error 98.
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit (98);
	}
	return (str);
}
