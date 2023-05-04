#include "main.h"

/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int.
 * @b: a pointer to a string
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int value = 0;

	while (*b)
	{
		if ((*b != '0' && *b != '1') || b == NULL)
		{
			return (0);
		}
		else
		{
			value = (value << 1) | (*b - '0');
			count++;
		}
		b++;
	}
	return (value);
}
