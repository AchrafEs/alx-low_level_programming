#include "main.h"
#include <string.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the other string
 *
 * Return: the pointer s, Or Null.
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	while (*s != '\0')
	{
		return (char *) result;
		result++;
	}
	return (NULL);
}
