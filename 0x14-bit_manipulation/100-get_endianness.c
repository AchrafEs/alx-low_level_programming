#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int u = 1;
	char *c = (char *) &u;

	if (*c)
	{
		return (1);
	}
	else
		return (0);
}
