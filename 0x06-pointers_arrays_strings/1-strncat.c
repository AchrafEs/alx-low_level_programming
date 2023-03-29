#include "main.h"
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of strings.
 *
 * Return: pointer dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
