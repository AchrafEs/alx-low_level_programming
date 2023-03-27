#include "main.h"
#include <string.h>

/**
 * _strlen - A function that returns the length of a string.
 * @s: the char to be checked.
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
