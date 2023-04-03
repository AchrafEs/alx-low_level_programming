#include "main.h"
#include <string.h>

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: the character s
 * @accept: the character to take from
 *
 * Return: number of bytes of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t len = strspn(s, accept);

	return (len);
}
