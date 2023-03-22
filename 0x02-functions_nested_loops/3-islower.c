#include "main.h"

/**
 * _islower - A function that checks
 * @c: the character to check
 * for lowercase characters.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
