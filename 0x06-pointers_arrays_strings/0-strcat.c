#include "main.h"
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: the pointer dest.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
