#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: the string to take the character from
 * @c: the character to take
 *
 * Return: the pointer c, Or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	char *ptr = strchr(s, c);

	if (ptr != NULL)
	{
		printf("%c" , s);
	}
	else
	{
		putchar(0);
	}
	putchar('\n');
	return (NULL);
}
