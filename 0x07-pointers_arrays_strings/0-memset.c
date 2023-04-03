#include "main.h"
#include <string.h>

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: memory pointer
 * @b: aconstant byte
 * @n: bytes of the memory to be filled
 *
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
