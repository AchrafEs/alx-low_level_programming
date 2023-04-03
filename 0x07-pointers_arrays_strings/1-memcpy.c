#include "main.h"
#include <string.h>

/**
 * _memcpy - A function that copies memory area.
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: the pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
