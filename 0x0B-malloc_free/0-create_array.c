#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the character to create the array from
 *
 * Return: a pointer to char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
