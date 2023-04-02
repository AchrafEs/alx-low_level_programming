#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that prints an integer.
 * @n: the integer to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		i -= n;
	}
	if (i >= 0)
	{
		i += n;
	}
	printf("%d", n);
}
