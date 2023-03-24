#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 * @c: the character to be checked
 *
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
