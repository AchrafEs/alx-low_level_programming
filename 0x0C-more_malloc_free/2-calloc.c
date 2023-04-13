#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of an array
 * @size: size of elements.
 *
 * Return: void;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		pointer = ptr;
		for (i = 0; i < nmemb * size; i++)
		{
			pointer[i] = 0;
		}
	}
	return (ptr);
}
