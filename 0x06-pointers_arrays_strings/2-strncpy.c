#include "main.h"
#include <string.h>

/**
 * *_strncpy - A function that copies string.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of characters
 *
 * Return: the pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
