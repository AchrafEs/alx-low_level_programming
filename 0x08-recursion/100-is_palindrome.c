#include "main.h"
#include <string.h>

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: the string to check
 *
 * Return: a if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
